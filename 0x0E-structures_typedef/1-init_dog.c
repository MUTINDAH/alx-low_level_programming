/**
 * init_dog - initializes struct dog
 * @d : param d
 * @name : param name
 * @age : param age
 * @owner : param owner
 * return : no
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
