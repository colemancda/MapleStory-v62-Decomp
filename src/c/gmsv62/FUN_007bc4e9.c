/* FUN_007bc4e9 - 0x007bc4e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bc4e9(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_9c0 [4];
  undefined4 uStack_9bc;
  int iStack_9b8;
  undefined4 uStack_9b4;
  
  FUN_00879bb8();
  uVar5 = DAT_00978368;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x54) = uVar5;
  FUN_00455c59();
  FUN_0045e4a2();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = FUN_00650dae();
  if (((0 < iVar2) && ((*piVar1 / 1000) % 10 != 0)) && (uVar3 = FUN_0043f6fe(), 0x7fffffff < uVar3))
  {
    iVar2 = FUN_00429303();
    uVar3 = *(uint *)(iVar2 + 0x108) >> 1 & 1;
    *(uint *)(unaff_EBP + -0x38) = uVar3;
    if (uVar3 == 0) {
      FUN_00486ada();
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      iVar2 = FUN_006158e9();
      if ((iVar2 == 0) && (iVar2 = FUN_00615923(), iVar2 == 0)) {
        FUN_006509a1();
        iVar2 = FUN_00413367();
        *(int *)(unaff_EBP + -0x10) = iVar2;
        iVar4 = FUN_007a3f65();
        if (iVar4 != 0) {
          *(int *)(unaff_EBP + -0x10) = ((iVar2 + -1) * *(int *)(unaff_EBP + 0x10)) / iVar4 + 1;
        }
        if (*(int *)(unaff_EBP + -0x10) < 0x10) {
          *(uint *)(unaff_EBP + -0x28) = *(uint *)(extraout_ECX + 0x52c) & 1;
          FUN_006509a1();
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
          puVar6 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x34) = *puVar6;
          iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
          iVar2 = *(int *)(unaff_EBP + 0x10);
          iVar4 = *(int *)(iVar4 + 4) + -0x1c;
          *(int *)(unaff_EBP + -0x30) = iVar4;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            iVar2 = -iVar2;
          }
          *(int *)(unaff_EBP + -0x24) = iVar2 + *(int *)(unaff_EBP + -0x34);
          *(int *)(unaff_EBP + -0x20) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          uStack_9b4 = 0x7bc694;
          uVar5 = FUN_005d5903();
          *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
          (*DAT_0097b504)();
          iVar2 = *(int *)(unaff_EBP + 0x10);
          *(undefined4 *)(unaff_EBP + -0xa8) = 0;
          puVar6 = (undefined4 *)(unaff_EBP + -0xa4);
          for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (0 < iVar2) {
            *(int *)(unaff_EBP + -0x10) = unaff_EBP + -0xa8;
            puVar6 = (undefined4 *)(unaff_EBP + -0x984);
            do {
              uStack_9b4 = *(undefined4 *)(unaff_EBP + -0x6c);
              iStack_9b8 = unaff_EBP + -0x5c;
              uStack_9bc = 0x7bc708;
              puVar7 = (undefined4 *)FUN_005c5bbc();
              *(undefined4 *)(unaff_EBP + -0x24) = *puVar7;
              *(undefined4 *)(unaff_EBP + -0x20) = puVar7[1];
              piVar1 = (int *)(*(int *)(unaff_EBP + -0x2c) + 4);
              iVar2 = *piVar1;
              *(int **)(unaff_EBP + -0x40) = piVar1;
              (**(code **)(iVar2 + 0x18))();
              uStack_9b4 = *(undefined4 *)(unaff_EBP + -0x30);
              iStack_9b8 = *(undefined4 *)(unaff_EBP + -0x34);
              uStack_9bc = 0x7bc73d;
              iVar2 = FUN_0086156f();
              if (iVar2 == 0) {
                iVar2 = *(int *)(unaff_EBP + -0x18);
                FUN_00434d5d();
              }
              else {
                iVar2 = *(int *)(unaff_EBP + -0x18);
              }
              uStack_9b4 = 0x7bc764;
              _memset(puVar6 + -3,0,0x98);
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 4 + iVar2 * 8);
              if (iVar4 != 0) {
                puVar6[-3] = iVar4;
                puVar6[0x21] = *(undefined4 *)(unaff_EBP + -0x24);
                puVar6[0x22] = *(undefined4 *)(unaff_EBP + -0x20);
                puVar6[1] = 300;
                uVar5 = FUN_005c634c();
                puVar6[-1] = uVar5;
                uVar5 = FUN_0067d28e();
                *puVar6 = uVar5;
                uVar5 = FUN_005c9cb2();
                puVar6[3] = 0;
                puVar6[-2] = uVar5;
                uStack_9b4 = 0x7bc7d1;
                _memset(puVar6 + 0x12,0,0x3c);
                uVar5 = FUN_007d1e08();
                *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
                iVar4 = **(int **)(unaff_EBP + 8);
                *(int *)(unaff_EBP + -0x1c) = iVar4;
                if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
                   ((iVar4 != 0x3d0cea && (iVar4 != 0x4faa91)))) {
                  *(undefined4 *)(unaff_EBP + -0x18) = 1;
                }
                else {
                  *(undefined4 *)(unaff_EBP + -0x18) = 0;
                }
                iVar4 = FUN_005cdcb1();
                if ((iVar4 == 0) && (iVar4 = FUN_005ca1ff(), iVar4 == 0)) {
                  FUN_006509a1();
                  uVar5 = FUN_00413367();
                  *(undefined4 *)(unaff_EBP + -0x3c) = uVar5;
                  uVar3 = FUN_004133f0();
                  if (uVar3 % 100 < *(uint *)(unaff_EBP + -0x3c)) {
                    **(undefined4 **)(unaff_EBP + -0x10) = 3;
                  }
                }
                iVar4 = FUN_005dcae0();
                if (iVar4 == 0) {
                  puVar6[3] = 0;
                }
                (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x10))();
                (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x10))();
                uStack_9b4 = 0;
                iStack_9b8 = **(undefined4 **)(unaff_EBP + -0x10);
                uStack_9bc = *(undefined4 *)(unaff_EBP + -0x18);
                *(undefined1 **)(unaff_EBP + -0x3c) = auStack_9c0;
                FUN_004033a1(&DAT_0097812c);
                uVar5 = puVar6[0x22];
                uVar9 = puVar6[0x21];
                iVar4 = puVar6[1] + *(int *)(unaff_EBP + -0x38);
                uVar15 = 0;
                uVar14 = 0;
                uVar13 = puVar6[3];
                uVar12 = *(undefined4 *)(unaff_EBP + -0x28);
                uVar11 = puVar6[-2];
                uVar10 = *(undefined4 *)(unaff_EBP + -0x1c);
                uVar8 = FUN_0067e5d1(uVar10,iVar4,uVar11,uVar12,uVar13,0,0,uVar9,uVar5);
                FUN_005cbf42(uVar8,uVar10,iVar4,uVar11,uVar12,uVar13,uVar14,uVar15,uVar9,uVar5);
              }
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
              puVar6 = puVar6 + 0x26;
              *(int *)(unaff_EBP + -0x18) = iVar2 + 1;
            } while (iVar2 + 1 < *(int *)(unaff_EBP + 0x10));
          }
          iVar2 = 0;
          uStack_9b4 = 0x7bc8fe;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_007d1e08();
          FUN_00457d37();
          FUN_00457d37();
          FUN_00457cda();
          FUN_00457d37();
          if (0 < *(int *)(unaff_EBP + 0x10)) {
            do {
              if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4 + iVar2 * 8) != 0) {
                FUN_004b8c9b();
              }
              FUN_00457d37();
              FUN_00457cda();
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(unaff_EBP + 0x10));
          }
          FUN_00457cda();
          FUN_004751b2();
          iVar2 = *(int *)(unaff_EBP + -0x54);
          uVar5 = 1;
          *(undefined4 *)(iVar2 + 0x208c) = 1;
          uVar9 = FUN_007d1e08();
          *(undefined4 *)(iVar2 + 0x2090) = uVar9;
          uStack_9b4 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_9b8 = *(undefined4 *)(unaff_EBP + 8);
          uStack_9bc = 0x7bc9d9;
          FUN_00790b31();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uStack_9bc = 0x7bc9e5;
          FUN_0045ebca();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uStack_9bc = 0x7bc9f1;
          FUN_007bd571();
          goto LAB_007bc9f7;
        }
      }
    }
  }
  uVar5 = 0;
LAB_007bc9f7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


