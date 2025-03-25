class Resolver 
{
  constructor()
  {
    this.keyToValue = new Map();
    this.valueToKey = new Map();
  }

  set(key, value)
  {
    if (this.keyToValue.has(key))
      this.delete(key);
    if (this.valueToKey.has(value))
      this.delete(this.valueToKey.get(value));
    this.keyToValue.set(key, value);
    this.valueToKey.set(value, key);
  }

  get(key)
  {
    return this.keyToValue.get(key);
  }

  getKey(value)
  {
    return this.valueToKey.get(value);
  }

  delete(key)
  {
    const value = this.keyToValue.get(key);
    this.keyToValue.delete(key);
    if (value !== undefined)
      this.valueToKey.delete(value);
  }
}
