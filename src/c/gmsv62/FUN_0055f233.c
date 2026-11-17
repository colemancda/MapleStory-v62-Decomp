/* FUN_0055f233 - 0x0055f233 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0055f233(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  uint uStack_28;
  
  FUN_00879bb8();
  uStack_28 = unaff_EBP - 0x10;
  puStack_2c = (undefined1 *)0x55f254;
  FUN_0045b90e();
  uStack_28 = 0;
  puStack_2c = (undefined1 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_30 = 0x55f262;
  FUN_0045ed72();
  puStack_2c = (undefined1 *)0x55f269;
  puVar2 = (undefined4 *)FUN_0045ee27();
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_28 = 0x55f286;
  FUN_00414ebb();
  if (!bVar1) {
    if (*(int *)(extraout_ECX + 0x8c) == 0) {
      uStack_28 = 0;
      puStack_2c = (undefined1 *)0x1;
      uStack_30 = 0;
      uStack_34 = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_38;
      FUN_00679d22(auStack_38,0x110d);
      iVar3 = FUN_007db791();
      if (iVar3 == 7) goto LAB_0055f2f7;
    }
    iVar3 = DAT_00978368;
    if (DAT_00978368 != 0) {
      uStack_28 = 0;
      puStack_2c = (undefined1 *)0x1f4;
      uStack_30 = 0x55f2d1;
      iVar4 = FUN_004becbc();
      uStack_28 = 0;
      puStack_2c = (undefined1 *)0x0;
      if (iVar4 != 0) {
        uStack_30 = 0x49;
        uStack_34 = 0x55f308;
        FUN_0060142b();
        uStack_28 = (uint)*(ushort *)(extraout_ECX + 0x78);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        puStack_2c = (undefined1 *)0x55f31e;
        FUN_0045d247();
        uStack_28 = *(uint *)(extraout_ECX + 0x7c);
        puStack_2c = (undefined1 *)0x55f329;
        FUN_00457d37();
        puStack_2c = (undefined1 *)&uStack_28;
        *(uint **)(unaff_EBP + -0x14) = &uStack_28;
        uStack_30 = 0x55f33b;
        FUN_0048b998();
        uStack_30 = 0x55f342;
        FUN_0045b90e();
        puStack_2c = (undefined1 *)0x55f34a;
        FUN_00459cb5();
        uStack_28 = *(uint *)(*(int *)(extraout_ECX + 0x57c) + 0x48);
        puStack_2c = (undefined1 *)0x55f35b;
        uVar5 = FUN_00457cda();
        uStack_28 = CONCAT31((int3)((uint)uVar5 >> 8),*(int *)(extraout_ECX + 0x8c) != 0);
        puStack_2c = (undefined1 *)0x55f36d;
        FUN_00457cda();
        if (*(int *)(extraout_ECX + 0x8c) != 0) {
          uStack_28 = *(uint *)(extraout_ECX + 0x80);
          puStack_2c = (undefined1 *)0x55f383;
          FUN_00457d37();
          uStack_28 = *(uint *)(extraout_ECX + 0x84);
          puStack_2c = (undefined1 *)0x55f391;
          FUN_00457d37();
        }
        uStack_28 = 0x55f396;
        uStack_28 = FUN_007d1e08();
        puStack_2c = (undefined1 *)0x55f39f;
        FUN_00457d37();
        uStack_28 = unaff_EBP - 0x24;
        puStack_2c = (undefined1 *)0x55f3ae;
        FUN_004751b2();
        uVar5 = 1;
        *(undefined4 *)(iVar3 + 0x208c) = 1;
        uStack_28 = 0x55f3bc;
        uVar6 = FUN_007d1e08();
        *(undefined4 *)(iVar3 + 0x2090) = uVar6;
        uStack_28 = 0x8e7;
        puStack_2c = (undefined1 *)(unaff_EBP + -0x14);
        uStack_30 = 0x55f3d5;
        puVar2 = (undefined4 *)FUN_00679d86();
        puStack_2c = (undefined1 *)*puVar2;
        uStack_28 = 100;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uStack_30 = 0x55f3e3;
        FUN_007d4073();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_28 = 0x55f3f1;
        FUN_00402676();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_28 = 0x55f3fd;
        FUN_0045ebca();
        goto LAB_0055f3ff;
      }
      uStack_30 = 0;
      uStack_34 = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_38;
      FUN_00679d22(auStack_38,0x137);
      FUN_007db3ad();
    }
  }
LAB_0055f2f7:
  uVar5 = 0;
LAB_0055f3ff:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


