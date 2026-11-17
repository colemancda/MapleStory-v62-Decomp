/* FUN_0067c6ca - 0x0067c6ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067c6ca(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_ad0;
  int iStack_acc;
  int iStack_ac8;
  int iStack_ac4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xb0) != 1) goto LAB_0067d24c;
  *(undefined4 *)(unaff_EBP + -0x6c) = DAT_00978368;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    FUN_0045e7c2();
  }
  pcVar1 = *(code **)(extraout_ECX + 0xa0);
  *(undefined4 *)(unaff_EBP + -0x40) = 4;
  if (pcVar1 == ptr_004fa6a2) {
    uVar4 = FUN_004133f0();
    *(uint *)(unaff_EBP + -0x40) = ~uVar4 & 1 | 4;
  }
  iVar3 = FUN_00654380();
  if (((iVar3 == 0) && (*(int *)(extraout_ECX + 0xa0) != 0x4f837a)) &&
     ((iVar3 = FUN_004865cc(), iVar3 != 0 ||
      ((iVar3 = *(int *)(DAT_00978358 + 0x4fc) / 10000, iVar3 == 0xbe || (iVar3 == 0xc1))))))
  goto LAB_0067d24c;
  *(int *)(unaff_EBP + -0x8c) = *(int *)(unaff_EBP + -0x40) + -4;
  iVar3 = FUN_0067e909();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    FUN_0067f663();
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  if (iVar3 == 0) goto LAB_0067d24c;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + 0x24);
  iVar5 = *(int *)(extraout_ECX + 0xa0);
  bVar2 = false;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  if ((iVar5 == 0x205d2d) || (iVar5 == 0x21e3cd)) {
LAB_0067c819:
    bVar2 = true;
    *(undefined4 *)(unaff_EBP + -0x68) = 1;
  }
  else if (iVar5 == 0x23435e) {
    *(undefined4 *)(unaff_EBP + -0x68) = 1;
  }
  else if (iVar5 == 0x236a6b) goto LAB_0067c819;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  if (bVar2) {
    FUN_00411537();
    piVar6 = (int *)(extraout_ECX + 4);
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
    (**(code **)(*piVar6 + 0x10))();
    (*DAT_0097b54c)();
    iStack_ac4 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_ac8 = unaff_EBP + -0x1b8;
    iStack_acc = unaff_EBP + -0x7c;
    iStack_ad0 = 0x67ca9f;
    uVar9 = FUN_005d528b();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar9;
    FUN_00411537();
    iVar3 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x30) = *puVar8;
    *(int *)(unaff_EBP + -0x58) = -*(int *)(unaff_EBP + -0x58);
    *(int *)(unaff_EBP + -0x60) = -*(int *)(unaff_EBP + -0x60);
    FUN_004459fe();
    (*DAT_0097b54c)();
    iStack_ac4 = 0;
    iStack_ac8 = 0;
    iStack_acc = *(int *)(unaff_EBP + -0x14);
    iStack_ad0 = unaff_EBP + -0x17c;
    iVar3 = FUN_005d528b(unaff_EBP + -0x60);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    if ((*(int *)(unaff_EBP + -0x10) != 0) || (iVar3 != 0)) {
      if (*(int *)(unaff_EBP + -0x10) == iVar3) {
        piVar10 = (int *)(DAT_00978358 + 4);
        piVar6 = (int *)(**(code **)(*piVar6 + 0x10))();
        piVar10 = (int *)(**(code **)(*piVar10 + 0x10))();
        iVar3 = *(int *)(extraout_ECX + 0xa0);
        *(uint *)(unaff_EBP + -0x24) = (uint)(*piVar6 <= *piVar10);
        if (iVar3 == 0x236a6b) {
          *(uint *)(unaff_EBP + -0x24) = (uint)(*(int *)(unaff_EBP + -0x24) == 0);
        }
      }
      else {
        *(uint *)(unaff_EBP + -0x24) = (uint)(iVar3 < *(int *)(unaff_EBP + -0x10));
      }
      iStack_ac4 = 0x67cb9a;
      FUN_00879c20();
      puVar8 = (undefined4 *)(unaff_EBP + -0x7c);
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        puVar8 = (undefined4 *)(unaff_EBP + -0x60);
      }
      uVar4 = *(uint *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x9c) = *puVar8;
      *(undefined4 *)(unaff_EBP + -0x98) = puVar8[1];
      *(undefined4 *)(unaff_EBP + -0x94) = puVar8[2];
      *(undefined4 *)(unaff_EBP + -0x90) = puVar8[3];
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        uVar4 = *(uint *)(unaff_EBP + -0x18);
      }
      *(uint *)(unaff_EBP + -0x10) = uVar4 & 0xffff;
      if ((uVar4 & 0xffff) != 0) {
LAB_0067cbcd:
        iVar3 = *(int *)(unaff_EBP + -0x20);
LAB_0067cbd0:
        FUN_00413367();
        uVar9 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0xcc) = uVar9;
        if ((*(int **)(iVar3 + 0x68) == (int *)0x0) ||
           (iVar5 = **(int **)(iVar3 + 0x68), iVar5 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(iVar5 + -4) >> 1;
        }
        if (uVar4 != 0) {
          if (*(int *)(iVar3 + 0x68) != 0) {
            InterlockedIncrement((LONG *)(*(int *)(iVar3 + 0x68) + 8));
          }
          FUN_00402fa6();
          iVar5 = *(int *)(unaff_EBP + 8);
          *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(iVar3 + 0x68);
          *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(unaff_EBP + -0x24);
          iVar5 = *(int *)(iVar3 + 0x6c) + iVar5;
          *(int *)(extraout_ECX + 0x78) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(extraout_ECX + 0x78) = 1;
          }
        }
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        FUN_00455c59();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_ac4 = 0x67cc85;
        uVar9 = FUN_00650dae();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x18) = uVar9;
        if (*(int *)(unaff_EBP + -0x54) != 0) {
          FUN_0045e7c2();
        }
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar3 + 0x70);
        iStack_ac4 = *(undefined4 *)(unaff_EBP + -0x40);
        iStack_ac8 = 0;
        iStack_acc = *(int *)(unaff_EBP + -0x18);
        iStack_ad0 = *(int *)(unaff_EBP + -0x3c);
        FUN_0064ba86();
        iVar3 = *(int *)(extraout_ECX + 0xa0);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((iVar3 == 0x2f9f6e) || (iVar3 == 0x31260d)) {
          *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0x9c);
          *(undefined4 *)(unaff_EBP + -0xa8) = *(undefined4 *)(unaff_EBP + -0x98);
          *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x94);
          *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x90);
          *(int *)(unaff_EBP + -0xa0) = *(int *)(unaff_EBP + -0x90) + 100;
          piVar6 = (int *)FUN_00424619();
          piVar6 = (int *)*piVar6;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (piVar6 == (int *)0x0) {
            iStack_ad0 = 0;
          }
          else {
            iStack_ad0 = *piVar6;
          }
          iStack_ac4 = 500;
          iStack_ac8 = *(int *)(unaff_EBP + -0x30) + 200;
          iStack_acc = unaff_EBP + -0xac;
          FUN_00428a3e();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_004030b1();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (0 < *(int *)(unaff_EBP + -0x10)) {
          iVar3 = *(int *)(unaff_EBP + -0x6c);
          do {
            piVar6 = (int *)(unaff_EBP + -0xaa0 + *(int *)(unaff_EBP + -0x14) * 0x98);
            *(int **)(unaff_EBP + -0x18) = piVar6;
            iStack_ac4 = 0x67cd85;
            _memset(piVar6,0,0x98);
            *piVar6 = *(int *)(unaff_EBP + -0xf8 + *(int *)(unaff_EBP + -0x14) * 4);
            iVar5 = FUN_005c634c();
            piVar6[2] = iVar5;
            iVar5 = FUN_0067d28e();
            piVar6[3] = iVar5;
            iVar5 = FUN_00654380();
            if (iVar5 == 0) {
              if ((*(int *)(unaff_EBP + -0x14) == 0) && (*(int *)(unaff_EBP + -100) != 0)) {
                piVar10 = (int *)(unaff_EBP + -0x38);
              }
              else {
                iStack_ac4 = *(undefined4 *)(unaff_EBP + -0x9c);
                iStack_ac8 = unaff_EBP + -0xa4;
                iStack_acc = 0x67cefe;
                piVar10 = (int *)FUN_005c5bbc();
                piVar6 = *(int **)(unaff_EBP + -0x18);
                iVar3 = *(int *)(unaff_EBP + -0x6c);
              }
              iVar5 = *(int *)(unaff_EBP + -100);
              piVar6[0x24] = *piVar10;
              piVar6[0x25] = piVar10[1];
              if (iVar5 == 0) {
                iVar5 = *(int *)(unaff_EBP + -0x14) * 0x32;
              }
              else {
                iVar5 = *(int *)(unaff_EBP + -0x2c);
              }
              piVar6[4] = iVar5 + *(int *)(unaff_EBP + -0x30);
            }
            else {
              iVar3 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x2c);
              if (*(int *)(unaff_EBP + -0x24) == 0) {
                iVar3 = -iVar3;
              }
              *(int *)(unaff_EBP + -0x2c) = iVar3;
              piVar10 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
              *(int *)(unaff_EBP + -0x74) = *piVar10 + *(int *)(unaff_EBP + -0x2c);
              iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
              *(int *)(unaff_EBP + -0x70) =
                   *(int *)(iVar3 + 4) + *(int *)(*(int *)(unaff_EBP + -0x20) + 0x30);
              if (*(int *)(unaff_EBP + -0x24) == 0) {
                iVar3 = *(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x74);
              }
              else {
                iVar3 = *(int *)(unaff_EBP + -0x74) - *(int *)(unaff_EBP + -0x38);
              }
              iVar5 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x70);
              *(int *)(unaff_EBP + -0x18) = iVar5 * iVar5 + iVar3 * iVar3;
              FUN_0087af44();
              uVar9 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x2c) = uVar9;
              piVar10 = (int *)FUN_0067f6cc();
              iVar3 = *(int *)(unaff_EBP + -0x20);
              *piVar10 = *(int *)(iVar3 + 0x70) + *(int *)(unaff_EBP + 8);
              piVar10[1] = *(int *)(iVar3 + 0x70) + *(int *)(unaff_EBP + -0x2c) +
                           *(int *)(unaff_EBP + 8);
              piVar10[2] = *(int *)(unaff_EBP + -0x74);
              piVar10[3] = *(int *)(unaff_EBP + -0x70);
              piVar10[4] = *(int *)(unaff_EBP + -0x38);
              piVar10[5] = *(int *)(unaff_EBP + -0x34);
              piVar10[6] = *(int *)(unaff_EBP + -0x24);
              if (*(int *)(iVar3 + 0x78) != 0) {
                InterlockedIncrement((LONG *)(*(int *)(iVar3 + 0x78) + 8));
              }
              FUN_00402fa6();
              iVar5 = *(int *)(unaff_EBP + -0x2c);
              piVar10[8] = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x78);
              piVar10[9] = *(int *)(unaff_EBP + -0x8c);
              iVar3 = *(int *)(unaff_EBP + -0x6c);
              piVar6[0x24] = *(int *)(unaff_EBP + -0x38);
              piVar6[0x25] = *(int *)(unaff_EBP + -0x34);
              piVar6[4] = *(int *)(unaff_EBP + -0x30) + iVar5;
            }
            iVar7 = FUN_005c9cb2();
            iVar5 = *(int *)(unaff_EBP + -0x68);
            piVar6[1] = iVar7;
            *(int *)(unaff_EBP + -0x18) = *piVar6 + 0x170;
            if (iVar5 == 0) {
              uVar9 = FUN_004b8c9b();
              iStack_ac4 = iVar3 + 0x2114;
              iStack_ac8 = iVar3 + 0x209c;
              iStack_acc = *(undefined4 *)(unaff_EBP + -0x88);
              iStack_ad0 = *(int *)(unaff_EBP + -0x18);
              iVar5 = FUN_0066eff6(uVar9);
            }
            else {
              uVar9 = FUN_004b8c9b();
              iStack_ac4 = iVar3 + 0x2114;
              iStack_ac8 = iVar3 + 0x209c;
              iStack_acc = *(undefined4 *)(unaff_EBP + -0x88);
              iStack_ad0 = *(int *)(unaff_EBP + -0x18);
              iVar5 = FUN_0066f203(uVar9);
            }
            piVar6[6] = iVar5;
            iVar5 = FUN_00413367();
            if ((0 < iVar5) && (0 < piVar6[6])) {
              piVar6[6] = iVar5;
            }
            iVar5 = FUN_005dcae0();
            if (iVar5 == 0) {
              piVar6[6] = 0;
            }
            iStack_ac4 = 0;
            iStack_ac8 = 1;
            iStack_acc = 1;
            *(int **)(unaff_EBP + -0x18) = &iStack_ad0;
            iStack_ad0 = extraout_ECX_00;
            FUN_0067d25d(&iStack_ad0,*(undefined4 *)(unaff_EBP + -0x14));
            iVar5 = piVar6[0x25];
            iVar7 = piVar6[0x24];
            iVar11 = piVar6[4] + *(int *)(unaff_EBP + 8);
            uVar17 = 0;
            uVar16 = 0;
            iVar15 = piVar6[6];
            *(undefined1 *)(unaff_EBP + -4) = 1;
            uVar9 = *(undefined4 *)(unaff_EBP + -0x24);
            iVar14 = piVar6[1];
            uVar13 = *(undefined4 *)(extraout_ECX + 0xa0);
            FUN_004e21db(uVar13,iVar11,iVar14,uVar9,iVar15,0,0,iVar7,iVar5);
            uVar12 = FUN_0067d287();
            FUN_005cbf42(uVar12,uVar13,iVar11,iVar14,uVar9,iVar15,uVar16,uVar17,iVar7,iVar5);
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x10));
        }
        iStack_ac4 = 0x67d091;
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00457d37();
        FUN_007d1e08();
        FUN_00457d37();
        FUN_00457cda();
        FUN_00457cda();
        if (0 < *(int *)(unaff_EBP + -0x10)) {
          iVar3 = *(int *)(unaff_EBP + -0x10);
          piVar6 = (int *)(unaff_EBP + -0xaa0);
          do {
            FUN_004b8c9b();
            FUN_00457d37();
            FUN_00457cda();
            FUN_005c5474();
            FUN_00457cda();
            FUN_00457cda();
            FUN_00457cda();
            (**(code **)(*(int *)(*piVar6 + 4) + 0x10))();
            FUN_0045d247();
            (**(code **)(*(int *)(*piVar6 + 4) + 0x10))();
            FUN_0045d247();
            (**(code **)(*(int *)(*piVar6 + 4) + 0x14))();
            FUN_0045d247();
            (**(code **)(*(int *)(*piVar6 + 4) + 0x14))();
            FUN_0045d247();
            FUN_0045d247();
            FUN_00457d37();
            piVar6 = piVar6 + 0x26;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        FUN_0045d247();
        (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        FUN_0045d247();
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0xfc) = *(undefined4 *)(unaff_EBP + 8);
        FUN_0067d821();
        *(undefined4 *)(extraout_ECX + 0x130) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0045ebca();
        iStack_ac4 = unaff_EBP + -0x134;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        iStack_ac8 = 0x67d24c;
        FUN_0087a0b8();
      }
    }
  }
  else {
    iVar7 = DAT_00978358;
    if (iVar5 == 0x4f837a) {
      iVar7 = extraout_ECX;
    }
    (**(code **)(*(int *)(iVar7 + 4) + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    while( true ) {
      iVar5 = FUN_005d5c94();
      *(int *)(unaff_EBP + -0xf8) = iVar5;
      if (iVar5 == 0) break;
      piVar6 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar5 = *piVar6;
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar3 + 0x30);
      iVar7 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar7 = *(int *)(iVar7 + 4);
      iVar15 = *(int *)(iVar3 + 0x34);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x30) + iVar5;
      *(int *)(unaff_EBP + -0x38) = iVar5 - iVar15;
      *(int *)(unaff_EBP + -0x58) = iVar5 - *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0x28) = iVar15 + iVar5;
      *(int *)(unaff_EBP + -0x70) = iVar7 + *(int *)(unaff_EBP + -0x30);
      iVar5 = FUN_005d5ded();
      if (iVar5 != 0) {
        (*DAT_0097b504)();
        *(undefined4 *)(unaff_EBP + -0x24) = 1;
LAB_0067c98e:
        iStack_ac4 = *(undefined4 *)(unaff_EBP + -0xbc);
        iStack_ac8 = unaff_EBP + -0x58;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        iStack_acc = 0x67c9b3;
        puVar8 = (undefined4 *)FUN_005c5bbc();
        uVar9 = *puVar8;
        *(undefined4 *)(unaff_EBP + -0x34) = puVar8[1];
        iVar3 = *(int *)(extraout_ECX + 0xa0);
        *(undefined4 *)(unaff_EBP + -0x38) = uVar9;
        if (((iVar3 != 0x2f9f6e) && (iVar3 != 0x31260d)) && (iVar3 != 0x4f837a)) goto LAB_0067cbcd;
        iVar3 = *(int *)(unaff_EBP + -0x20);
        FUN_00411537();
        iStack_ac4 = 0x67ca05;
        (*DAT_0097b54c)();
        iStack_ac4 = 0;
        iStack_ac8 = *(int *)(unaff_EBP + -0xf8);
        iStack_acc = *(int *)(unaff_EBP + -0x14) + -1;
        iStack_ad0 = unaff_EBP + -0xf4;
        iVar5 = FUN_005d528b(unaff_EBP + -0x9c);
        *(int *)(unaff_EBP + -0x10) = iVar5 + 1;
        *(undefined4 *)(unaff_EBP + -100) = 1;
        *(undefined4 *)(unaff_EBP + -0x2c) = 0x78;
        goto LAB_0067cbd0;
      }
      iVar5 = FUN_005d5ded();
      if (iVar5 != 0) {
        (*DAT_0097b504)();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        goto LAB_0067c98e;
      }
      if (((*(code **)(extraout_ECX + 0xa0) != (code *)0x4f8379) &&
          (*(code **)(extraout_ECX + 0xa0) != ptr_004fa6a2)) || (*(int *)(unaff_EBP + -0x10) == 0))
      break;
      (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
LAB_0067d24c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


