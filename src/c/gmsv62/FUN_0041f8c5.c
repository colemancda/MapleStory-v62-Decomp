/* FUN_0041f8c5 - 0x0041f8c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0041f8c5(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  undefined4 local_18 [3];
  int local_c;
  int local_8;
  
  FUN_0041f52d();
  (*DAT_0097b658)(0);
  (*DAT_0097b4b8)(&DAT_00973ac8,s_http___ingameweb_nexon_net_maple_00963e30);
  DAT_00973cc8 = 800;
  DAT_00973ccc = 0x5a;
  DAT_00973cd0 = (*DAT_0097b380)(0);
  local_64 = 0x30;
  local_60 = 0x28;
  local_5c = FUN_0041f74c;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 0;
  local_3c = s_AdSpace_00963e26 + 2;
  local_38 = 0;
  local_50 = DAT_00973cd0;
  sVar1 = (*DAT_0097b548)(&local_64);
  if (sVar1 != 0) {
    iVar2 = (*DAT_0097b544)(7);
    iVar2 = DAT_00973cc8 + iVar2 * 2;
    local_8 = iVar2;
    iVar3 = (*DAT_0097b544)(8);
    iVar3 = DAT_00973ccc + iVar3 * 2;
    (*DAT_0097b53c)(*(undefined4 *)(DAT_00973cd8 + 4),local_18);
    iVar2 = (*DAT_0097b544)(8,iVar2,iVar3,0,0,DAT_00973cd0,0);
    iVar4 = (*DAT_0097b544)(4);
    iVar2 = (*DAT_0097b538)(0x80,s_AdSpace_00963e26 + 2,0,0x80040000,local_18[0],
                            local_c + iVar4 + iVar2 * 2);
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x14) = local_8;
      *(int *)(param_1 + 0x18) = iVar3;
      (*DAT_0097b534)(iVar2,5);
      (*DAT_0097b530)(*(undefined4 *)(param_1 + 0x10));
      while( true ) {
        iVar2 = (*DAT_0097b52c)(local_34,0,0,0);
        if (iVar2 == 0) break;
        (*DAT_0097b528)(local_34);
        (*DAT_0097b524)(local_34);
      }
      (*DAT_0097b654)();
    }
  }
  return 0;
}


