using UnityEngine;
[RequireComponent(typeof(AudioSource))]


public class Gun : MonoBehaviour {
	public float damage = 10f;
	public float range = 100f;
	public Camera fpsCam;
	public float fireRate = 1f;
	private float lastFired = 0f;

	[SerializeField]
	private float force = 10f;

	private AudioSource shootClip;

	private Animator anim;

	public ParticleSystem muzzleflash;
	// Update is called once per frame

	void Start(){
		shootClip = gameObject.GetComponent<AudioSource>();
	}

	void Update () {
		if (Input.GetButton("Fire1")){
			Shoot();
		}
	}

	void Shoot(){
		if (Time.time > lastFired + fireRate) {

			muzzleflash.Play ();
			shootClip.Play();
			RaycastHit hit; 
			if (Physics.Raycast (fpsCam.transform.position, fpsCam.transform.forward, out hit, range)) {
				Debug.Log (hit.transform.name);
				Target target = hit.transform.GetComponent<Target>();
				//hit.rigidbody.AddForceAtPosition(force *  fpsCam.transform.forward, hit.point);	
				Debug.Log(target);

				if (target != null) {
					hit.rigidbody.AddForceAtPosition(force *  fpsCam.transform.forward, hit.point);	
					target.TakeDamage(damage);

				}
			}
			lastFired = Time.time;
		}

	}
}
