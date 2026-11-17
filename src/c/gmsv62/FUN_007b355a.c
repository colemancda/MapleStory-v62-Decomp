/* FUN_007b355a - 0x007b355a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b355a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uStack_9d4;
  int iStack_9d0;
  int iStack_9cc;
  int iStack_9c8;
  
  FUN_00879bb8();
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x24) = **(undefined4 **)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_00978368;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    FUN_0045e7c2();
  }
  iVar2 = FUN_007d1e08();
  uVar1 = *(uint *)(extraout_ECX + 0x52c);
  *(int *)(unaff_EBP + -0x28) = iVar2;
  if (((uVar1 & 0xfffffffe) != 0x12) && (iVar3 = FUN_0048bb31(), iVar3 == 0)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x4df8f1;
    iVar3 = FUN_004b8f25();
    if ((iVar3 == 0) || (*(int *)(unaff_EBP + -0x40) <= iVar2)) {
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(extraout_ECX + 0x4b0);
      *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + 0x10);
      puVar8 = (undefined4 *)(unaff_EBP + -0x80);
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      iVar2 = *(int *)(extraout_ECX + 4);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(int **)(unaff_EBP + -0x34) = (int *)(extraout_ECX + 4);
      iVar2 = (**(code **)(iVar2 + 0x10))();
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar2 + 4);
      piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar2 = *(int *)(extraout_ECX + 0x1efc) - *piVar4;
      if ((((iVar2 < -5) || (5 < iVar2)) ||
          (iVar2 = *(int *)(extraout_ECX + 0x1f00) - *(int *)(unaff_EBP + 0x10), iVar2 < -0x95)) ||
         (0x95 < iVar2)) {
        *(int *)(extraout_ECX + 0x1efc) = *piVar4;
        *(undefined4 *)(extraout_ECX + 0x1f00) = *(undefined4 *)(unaff_EBP + 0x10);
        *(undefined4 *)(extraout_ECX + 0x1f04) = 0;
      }
      else {
        if (99 < *(int *)(extraout_ECX + 0x1f04)) goto LAB_007b37f8;
        *(int *)(extraout_ECX + 0x1f04) = *(int *)(extraout_ECX + 0x1f04) + 1;
      }
      *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x28) + 1000;
      *(undefined4 *)(extraout_ECX + 0x528) = 5000;
      *(undefined4 *)(unaff_EBP + -0x48) = 0x4df8f1;
      FUN_004b8f75();
      iStack_9c8 = 0x7b36e9;
      _memset((void *)(unaff_EBP + -0x9b8),0,0x98);
      *(undefined4 *)(unaff_EBP + -0x9b8) = *(undefined4 *)(unaff_EBP + -0x88);
      uVar5 = FUN_005c634c();
      *(undefined4 *)(unaff_EBP + -0x9b0) = uVar5;
      uVar5 = FUN_0067d28e();
      *(undefined4 *)(unaff_EBP + -0x9ac) = uVar5;
      uVar5 = FUN_005c9cb2();
      *(undefined4 *)(unaff_EBP + -0x9b4) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x928) = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined4 *)(unaff_EBP + -0x924) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      iVar2 = unaff_EBP + -0x9a0;
      do {
        *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x32c4);
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(extraout_ECX + 0x4a4);
        uVar5 = FUN_004b8c9b();
        iStack_9cc = iVar2 + 0x3c;
        iStack_9c8 = 0;
        uStack_9d4 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_9d0 = iVar2;
        FUN_0066c1d7(*(undefined4 *)(unaff_EBP + -0x2c),*(int *)(unaff_EBP + -0x30) + 0x209c,
                     *(int *)(unaff_EBP + -0x30) + 0x2114,uVar5,*(int *)(iVar2 + -0x18) + 0x170,1,
                     *(undefined4 *)(unaff_EBP + -0x3c),0,3,0,0,*(undefined4 *)(unaff_EBP + 8));
        if (*(int *)(unaff_EBP + 8) != 0) {
          iStack_9c8 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_9cc = 0x7b37c5;
          iVar3 = FUN_0064cf49();
          if (iVar3 != 0) {
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            break;
          }
        }
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
        iVar2 = iVar2 + 0x98;
      } while (*(int *)(unaff_EBP + 0x10) < 1);
      iStack_9cc = *(undefined4 *)(extraout_ECX + 0x4a4);
      iStack_9c8 = 0;
      iStack_9d0 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_9d4 = *(undefined4 *)(unaff_EBP + 8);
      FUN_0064ba86();
      *(uint *)(unaff_EBP + 0x18) = *(uint *)(extraout_ECX + 0x52c) & 1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
         ((iVar2 = **(int **)(unaff_EBP + 8), iVar2 != 0x3d0cea && (iVar2 != 0x4faa91)))) {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      else {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        piVar4 = (int *)(unaff_EBP + -0x9a8);
        do {
          iVar2 = 0x118;
          if (*(int *)(unaff_EBP + 8) < 0x118) {
            iVar2 = *(int *)(unaff_EBP + 8);
          }
          *piVar4 = iVar2;
          iVar2 = FUN_00413367();
          if ((0 < iVar2) && (0 < piVar4[2])) {
            piVar4[2] = iVar2;
          }
          iVar2 = FUN_005dcae0();
          if (iVar2 == 0) {
            piVar4[2] = 0;
          }
          iStack_9c8 = 0;
          iStack_9cc = 1;
          iStack_9d0 = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_9d4;
          uStack_9d4 = extraout_ECX_00;
          FUN_0067d25d(&uStack_9d4,*(undefined4 *)(unaff_EBP + 0x10));
          iVar2 = piVar4[0x21];
          iVar3 = piVar4[0x20];
          iVar6 = *(int *)(unaff_EBP + -0x28) + *piVar4;
          uVar13 = 0;
          iVar12 = piVar4[0x11];
          iVar11 = piVar4[2];
          uVar5 = *(undefined4 *)(unaff_EBP + 0x18);
          iVar10 = piVar4[-3];
          uVar9 = *(undefined4 *)(unaff_EBP + -0x24);
          uVar7 = FUN_0067e5d1(uVar9,iVar6,iVar10,uVar5,iVar11,iVar12,0,iVar3,iVar2);
          FUN_005cbf42(uVar7,uVar9,iVar6,iVar10,uVar5,iVar11,iVar12,uVar13,iVar3,iVar2);
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x46;
          piVar4 = piVar4 + 0x26;
        } while (*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -0x10));
      }
      iStack_9c8 = 0x7b3937;
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00429303();
      *(undefined1 *)(unaff_EBP + 8) = *(undefined1 *)(iVar2 + 0xf8);
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457d37();
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457cda();
      FUN_007d1e08();
      FUN_00457d37();
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        iVar2 = *(int *)(unaff_EBP + -0x10);
        piVar4 = (int *)(unaff_EBP + -0x9b8);
        do {
          FUN_004b8c9b();
          FUN_00457d37();
          FUN_00457cda();
          FUN_005c5474();
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x10))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x10))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x14))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x14))();
          FUN_0045d247();
          FUN_0045d247();
          FUN_00457d37();
          FUN_005d0a74();
          FUN_00457d37();
          piVar4 = piVar4 + 0x26;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      piVar4 = *(int **)(unaff_EBP + -0x34);
      (**(code **)(*piVar4 + 0x10))();
      FUN_0045d247();
      (**(code **)(*piVar4 + 0x10))();
      FUN_0045d247();
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
      iStack_9c8 = unaff_EBP + -0xc4;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iStack_9cc = 0x7b3b65;
      FUN_0087a0b8();
      uVar5 = 1;
      goto LAB_007b3b68;
    }
  }
LAB_007b37f8:
  uVar5 = 0;
LAB_007b3b68:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


