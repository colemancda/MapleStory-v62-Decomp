/* FUN_006602ea - 0x006602ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006602ea(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_64;
  undefined4 local_60;
  code *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined1 local_34 [28];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  (*DAT_0097b658)(0);
  DAT_00979738 = param_1;
  local_50 = *(undefined4 *)(param_1 + 0x20c);
  local_64 = 0x30;
  local_60 = 0x28;
  local_5c = FUN_0065fea6;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 0;
  local_3c = s_StartUpDlgClass_00968ac4;
  local_38 = 0;
  sVar1 = (*DAT_0097b548)(&local_64);
  if (sVar1 != 0) {
    iVar2 = (*DAT_0097b544)(7);
    local_8 = *(int *)(param_1 + 0x200) + iVar2 * 2;
    iVar2 = (*DAT_0097b544)(8);
    iVar2 = *(int *)(param_1 + 0x204) + iVar2 * 2;
    uVar3 = (*DAT_0097b540)(local_18);
    (*DAT_0097b53c)(uVar3);
    iVar2 = (*DAT_0097b538)(0,s_StartUpDlgClass_00968ac4,s_MapleStory_00968ab8,0x80040000,
                            (local_10 - local_8) / 2,(local_c - iVar2) / 2,local_8,iVar2,0,0,
                            *(undefined4 *)(param_1 + 0x20c),0);
    if (iVar2 != 0) {
      (*DAT_0097b534)(iVar2,5);
      (*DAT_0097b530)(iVar2);
      while (iVar2 = (*DAT_0097b52c)(local_34,0,0,0), iVar2 != 0) {
        (*DAT_0097b528)(local_34);
        (*DAT_0097b524)(local_34);
      }
      (*DAT_0097b654)();
      return 1;
    }
  }
  return 0;
}


