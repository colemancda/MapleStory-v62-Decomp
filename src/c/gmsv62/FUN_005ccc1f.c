/* FUN_005ccc1f - 0x005ccc1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ccc1f(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  bVar1 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x28) = (uint)bVar1;
  uVar2 = FUN_0042452b();
  uVar4 = *(undefined4 *)(extraout_ECX + 0x10c);
  *(undefined1 *)(unaff_EBP + -0xd) = uVar2;
  iVar3 = FUN_00413367(extraout_ECX + 0x104,uVar4);
  if (((iVar3 != 1) || (bVar1 != 0)) ||
     ((bVar1 = *(byte *)(unaff_EBP + -0xd) >> 1, 0xb < bVar1 && (bVar1 < 0x15)))) {
    uVar4 = FUN_007d1e08();
    iVar3 = *(int *)(extraout_ECX + 0xec);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    uVar8 = -(uint)(iVar3 != 0) & iVar3 - 0xcU;
    *(uint *)(unaff_EBP + -0x20) = uVar8;
    iVar3 = FUN_005c4e46();
    if (iVar3 != 0) {
      (**(code **)(*(int *)(-(uint)(*(int *)(extraout_ECX + 0xf0) != 0) &
                           *(int *)(extraout_ECX + 0xf0) - 0xcU) + 4))(0,0,0,0,0,0,0);
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar3 = *(int *)(extraout_ECX + 0x160), iVar3 == 0)) {
        iVar3 = *(int *)(extraout_ECX + 0x15c);
      }
      uVar4 = FUN_00413367(iVar3 + 0x40,*(undefined4 *)(iVar3 + 0x48));
      FUN_005e4d3f(uVar4,uVar8);
    }
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    if (-1 < *(char *)(unaff_EBP + -0xd)) {
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar3 = *(int *)(extraout_ECX + 0x160), iVar3 == 0)) {
        iVar3 = *(int *)(extraout_ECX + 0x15c);
      }
      uVar4 = FUN_00413367(iVar3 + 0x40,*(undefined4 *)(iVar3 + 0x48));
      FUN_005e4d3f(uVar4,uVar8);
      uVar4 = *(undefined4 *)(extraout_ECX + 0x348);
      *(uint *)(unaff_EBP + -0x1c) = *(byte *)(unaff_EBP + -0xd) & 1;
      uVar8 = (uint)(*(byte *)(unaff_EBP + -0xd) >> 1);
      iVar3 = FUN_00413367(extraout_ECX + 0x340,uVar4);
      if ((((iVar3 < 0xc) || (0x14 < iVar3)) &&
          ((iVar3 = FUN_00413367(extraout_ECX + 0x340,*(undefined4 *)(extraout_ECX + 0x348)),
           iVar3 < 0x15 || (0x19 < iVar3)))) || ((uVar8 < 6 || (8 < uVar8)))) {
        uVar4 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0x348) = uVar4;
        FUN_00413367(extraout_ECX + 0x334,*(undefined4 *)(extraout_ECX + 0x33c));
        uVar4 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0x33c) = uVar4;
        FUN_005c5f49();
      }
      if ((uVar8 < 0xc) || (0x14 < uVar8)) {
        if ((uVar8 < 6) || (8 < uVar8)) {
          if ((0x14 < uVar8) && (uVar8 < 0x1a)) {
            uVar4 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                                 *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
            *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
            iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            puVar5 = (undefined4 *)
                     (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(*(undefined4 *)(iVar3 + 4));
            uVar4 = FUN_007d3c48(*puVar5);
            FUN_007d4267(*(undefined4 *)(unaff_EBP + -0x24),uVar8 - 1,uVar4);
            uVar8 = *(uint *)(unaff_EBP + -0x18);
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            uVar7 = uVar8 & 0xff;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            uVar8 = (int)uVar8 >> 8 & 0xff;
            iVar3 = *(int *)(extraout_ECX + 0x15c);
            while ((iVar6 = *(int *)(iVar3 + 0x248), iVar6 != 0 &&
                   (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar6 + -4)))) {
              if (uVar7 == *(uint *)(*(int *)(unaff_EBP + -0x18) + 0xc + iVar6)) {
                iVar3 = *(int *)(unaff_EBP + -0x14) * 0x1c + *(int *)(iVar3 + 0x248);
                goto LAB_005ccedf;
              }
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1c;
            }
            iVar3 = 0;
LAB_005ccedf:
            iVar6 = FUN_00651eaf(uVar7);
            if (((iVar3 != 0) && (iVar6 != 0)) && (uVar8 != 0)) {
              uVar7 = 0;
              if (*(int *)(iVar6 + 4) != 0) {
                uVar7 = *(uint *)(*(int *)(iVar6 + 4) + -4);
              }
              if (uVar8 <= uVar7) {
                FUN_005ccfc1(unaff_EBP + -0x14);
                *(undefined4 *)(unaff_EBP + -4) = 0;
                if ((*(int **)(unaff_EBP + -0x14) == (int *)0x0) ||
                   (iVar6 = **(int **)(unaff_EBP + -0x14), iVar6 == 0)) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(uint *)(iVar6 + -4) >> 1;
                }
                if (uVar8 != 0) {
                  FUN_00402f41(unaff_EBP + -0x14);
                  *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(unaff_EBP + -0x1c);
                  iVar6 = FUN_007d1e08();
                  iVar6 = iVar6 + *(int *)(iVar3 + 0x18);
                  *(int *)(extraout_ECX + 0x78) = iVar6;
                  if (iVar6 == 0) {
                    *(undefined4 *)(extraout_ECX + 0x78) = 1;
                  }
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x14) != 0) {
                  FUN_004030b1();
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                }
              }
            }
          }
        }
        else {
          FUN_005c6409(uVar8);
          uVar4 = FUN_004133b5();
          *(undefined4 *)(extraout_ECX + 0x354) = uVar4;
        }
      }
      else {
        uVar4 = FUN_00413367(extraout_ECX + 0x340,*(undefined4 *)(extraout_ECX + 0x348));
        FUN_005cdf7c(uVar4,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
      }
    }
    FUN_005e4f36(*(undefined4 *)(unaff_EBP + 8));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x10c) = uVar4;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


