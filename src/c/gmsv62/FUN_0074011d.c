/* FUN_0074011d - 0x0074011d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074011d(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  uStack_28 = param_2;
  local_1c = 0x1b9;
  uStack_2c = param_1;
  puStack_30 = &local_1c;
  local_18 = 0x22f;
  local_14 = 0x22c;
  local_10 = 0x23e;
  puStack_34 = (undefined1 *)0x740152;
  iVar2 = (*DAT_0097b57c)();
  if (iVar2 != 0) {
    puStack_34 = local_c;
    iStack_38 = 0x740169;
    iVar2 = FUN_00455c59();
    iVar2 = *(int *)(iVar2 + 4);
    if (local_8 != 0) {
      puStack_34 = (undefined1 *)0x0;
      iStack_38 = 0x74017c;
      FUN_0045e7c2();
      local_8 = 0;
    }
    puStack_34 = *(undefined1 **)(iVar2 + 0x35);
    iStack_38 = iVar2 + 0x33;
    uStack_3c = 0x74018b;
    bVar1 = FUN_0045f03e();
    if (bVar1 < 0x33) {
      puStack_34 = *(undefined1 **)(iVar2 + 0xb9);
      iStack_38 = iVar2 + 0xb1;
      uStack_3c = 0x7401a3;
      iVar2 = FUN_00413367();
      uStack_44 = puStack_34;
      if (0 < iVar2) {
        puStack_34 = (undefined1 *)0x0;
        iStack_38 = 0;
        uStack_3c = 0;
        uStack_40 = 0;
        FUN_00679d22(&uStack_44,0x11ec);
        iVar2 = FUN_007db791();
        if (iVar2 == 6) {
          puStack_34 = (undefined1 *)0x7401db;
          FUN_0083d0f7();
        }
      }
    }
  }
  return;
}


