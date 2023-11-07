using System;

[Serializable]
public class GroupMemberData
{
    public int memberID;
    public string memberName;
    public bool isLeader;
    public int memberPoints;

    public GroupMemberData(string mname, int mid, int mpoints, bool leader)
    {
        memberID = mid;
        memberName = mname;
        memberPoints = mpoints;
        isLeader = leader;
    }
}