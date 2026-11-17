/* FUN_004bee37 - 0x004bee37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bee37(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  undefined1 *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (DAT_00979178 != 0) {
    return 0;
  }
  puStack_34 = (undefined1 *)0x1;
  piStack_38 = (int *)0x4bee59;
  iVar1 = FUN_004c2076();
  piVar3 = DAT_00978358;
  if (iVar1 == 0) {
    return 0;
  }
  puStack_34 = local_1c;
  local_14 = DAT_00978358;
  local_10 = DAT_00978368;
  piStack_38 = (int *)0x4bee7c;
  FUN_00455c59();
  if (local_18 != (undefined1 *)0x0) {
    puStack_34 = (undefined1 *)0x0;
    piStack_38 = (int *)0x4bee8f;
    FUN_0045e7c2();
  }
  puStack_34 = (undefined1 *)0x0;
  piStack_38 = (int *)0x1f4;
  puStack_3c = (undefined1 *)0x4bee9e;
  iVar1 = FUN_004becbc();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(local_8 + 0x10) != 1) {
    return 0;
  }
  puStack_34 = (undefined1 *)0x1;
  piStack_38 = (int *)0x4beeba;
  iVar1 = FUN_004c10d7();
  if (iVar1 == 0) {
    return 0;
  }
  puStack_34 = *(undefined1 **)(local_8 + 0x10);
  piStack_38 = (int *)0x4beecf;
  puStack_34 = (undefined1 *)FUN_0048aa38();
  if (puStack_34 == (undefined1 *)0x0) {
    return 0;
  }
  piStack_38 = (int *)0x1;
  puStack_3c = local_24;
  uStack_40 = 0x4beee7;
  local_18 = puStack_34;
  iVar1 = FUN_00458c4f();
  local_c = *(int *)(iVar1 + 4);
  puStack_34 = (undefined1 *)0x4beef5;
  FUN_0046575e();
  if (local_c != 0) {
    return 0;
  }
  puStack_34 = *(undefined1 **)(local_8 + 0x14);
  puStack_3c = local_24;
  piStack_38 = (int *)0x1;
  uStack_40 = 0x4bef11;
  iVar1 = FUN_00458c4f();
  iVar1 = *(int *)(iVar1 + 4);
  puStack_34 = (undefined1 *)0x4bef1c;
  FUN_0046575e();
  if (iVar1 == 0) {
    return 0;
  }
  puStack_34 = (undefined1 *)0x4bef2f;
  (**(code **)(*DAT_00978358 + 4))();
  puStack_34 = (undefined1 *)0x4bef36;
  iVar1 = FUN_004bf0d4();
  if (iVar1 == 0) {
LAB_004bef7a:
    puStack_34 = (undefined1 *)0x4bef88;
    iVar1 = FUN_0066127f();
    if (iVar1 == 0) {
      if (*(int *)(piVar3[0x5d1] + 4) != 0) {
        puStack_34 = (undefined1 *)0x0;
        piStack_38 = &local_c;
        puStack_3c = (undefined1 *)0x1;
        uStack_40 = 0x4befd2;
        uStack_40 = FUN_0045e2eb();
        uStack_44 = 0x4befd8;
        iVar1 = FUN_0044da62();
        if ((iVar1 != 0) && (((local_c == 0x1c || (local_c == 0x1b)) || (local_c == 0x1a)))) {
          iVar1 = *(int *)(piVar3[0x5d1] + 4);
          *(undefined4 *)(iVar1 + 400) = 1;
          puStack_34 = (undefined1 *)0x4bf005;
          uVar2 = FUN_007d1e08();
          *(undefined4 *)(iVar1 + 0x194) = uVar2;
          piVar3 = local_14;
        }
      }
      if (*(int *)(piVar3[0x5d1] + 0xc) != 0) {
        puStack_34 = (undefined1 *)0x0;
        piStack_38 = &local_c;
        puStack_3c = (undefined1 *)0x1;
        uStack_40 = 0x4bf029;
        uStack_40 = FUN_0045e2eb();
        uStack_44 = 0x4bf02f;
        iVar1 = FUN_0044da62();
        if ((iVar1 != 0) && (((local_c == 0x25 || (local_c == 0x24)) || (local_c == 0x23)))) {
          iVar1 = *(int *)(piVar3[0x5d1] + 0xc);
          *(undefined4 *)(iVar1 + 400) = 1;
          puStack_34 = (undefined1 *)0x4bf05c;
          uVar2 = FUN_007d1e08();
          *(undefined4 *)(iVar1 + 0x194) = uVar2;
          piVar3 = local_14;
        }
      }
      if (*(int *)(piVar3[0x5d1] + 0x14) != 0) {
        puStack_34 = (undefined1 *)0x0;
        piStack_38 = &local_c;
        puStack_3c = (undefined1 *)0x1;
        uStack_40 = 0x4bf080;
        uStack_40 = FUN_0045e2eb();
        uStack_44 = 0x4bf086;
        iVar1 = FUN_0044da62();
        if ((iVar1 != 0) && (((local_c == 0x2d || (local_c == 0x2c)) || (local_c == 0x2b)))) {
          iVar1 = *(int *)(piVar3[0x5d1] + 0x14);
          *(undefined4 *)(iVar1 + 400) = 1;
          puStack_34 = (undefined1 *)0x4bf0b3;
          uVar2 = FUN_007d1e08();
          *(undefined4 *)(iVar1 + 0x194) = uVar2;
        }
      }
      puStack_34 = (undefined1 *)0xffffffff;
      piStack_38 = (int *)local_18;
      puStack_3c = *(undefined1 **)(local_8 + 0x14);
      uStack_40 = 1;
      uStack_44 = 0x4bf0cd;
      FUN_008347d4();
      return 1;
    }
    puStack_34 = (undefined1 *)0x0;
    piStack_38 = (int *)0x0;
    puStack_3c = (undefined1 *)0x0;
    uStack_40 = 0;
    local_18 = (undefined1 *)&uStack_44;
    FUN_00679d22(&uStack_44,0x35b);
    FUN_007db3ad();
  }
  else {
    puStack_34 = (undefined1 *)0x4bef42;
    iVar1 = FUN_0045e2eb();
    if (iVar1 / 10000 != 0xbe) {
      puStack_34 = (undefined1 *)0x4bef59;
      iVar1 = FUN_0045e2eb();
      if (iVar1 / 10000 != 0xbf) goto LAB_004bef7a;
    }
    puStack_34 = (undefined1 *)0x3ec;
    piStack_38 = (int *)0x4bef78;
    FUN_007bd2b0();
  }
  return 0;
}


