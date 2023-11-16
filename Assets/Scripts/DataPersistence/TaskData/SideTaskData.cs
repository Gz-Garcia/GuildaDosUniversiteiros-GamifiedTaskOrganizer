using System;

[Serializable]
public class SideTaskData
{
    public string stcode;
    public string stname;
    public string stdescription;
    public int sttype;

    public SideTaskData(string tcode, string tname, string tdescription, int sttype) {
        this.stcode = tcode;
        this.stname = tname;
        this.stdescription = tdescription;
        this.sttype = sttype;
    }
}
