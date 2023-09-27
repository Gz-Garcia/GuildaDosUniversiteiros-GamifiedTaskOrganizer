using System;

[Serializable]
public class SettingsData
{
    public bool tutorial;
    public bool logged;

    public SettingsData()
    {
        tutorial = false;
        logged = false;
    }
}
