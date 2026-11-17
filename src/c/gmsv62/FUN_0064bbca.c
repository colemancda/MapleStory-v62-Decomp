/* FUN_0064bbca - 0x0064bbca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064bbca(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  
  FUN_00879bb8();
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + 0x18)) {
    do {
      iVar6 = *(int *)(unaff_EBP + 0x10);
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x38) + 0xc + iVar2 * 4);
      if ((*(int *)(unaff_EBP + 0x1c) == 0) ||
         (iVar2 = FUN_0064cb77(iVar6,*(undefined4 *)(unaff_EBP + 0x1c)), iVar2 == 0)) {
        if (*(int **)(unaff_EBP + 8) == (int *)0x0) {
          if (iVar6 < 0x15b2ce) {
            if (iVar6 != 0x15b2cd) {
              if (iVar6 < 0x14ef83) {
                if (iVar6 != 0x14ef82) {
                  if (iVar6 < 0x140521) {
                    if (((iVar6 != 0x140520) && (iVar6 != 0x13de04)) && (iVar6 != 0x13de0e)) {
                      bVar7 = iVar6 == 0x13de30;
                      goto LAB_0064bec8;
                    }
                  }
                  else if ((iVar6 != 0x142c46) && (iVar6 != 0x145339)) {
                    if (0x145356 < iVar6) {
                      bVar8 = SBORROW4(iVar6,0x145358);
                      iVar2 = -0x145358;
                      bVar7 = iVar6 == 0x145358;
LAB_0064befe:
                      if (bVar7 || bVar8 != iVar6 + iVar2 < 0) goto LAB_0064c048;
                    }
                    goto LAB_0064bf04;
                  }
                }
              }
              else if (((((iVar6 != 0x151679) && (iVar6 != 0x15167c)) && (iVar6 != 0x151697)) &&
                       ((iVar6 != 0x1564b7 && (iVar6 != 0x158bab)))) && (iVar6 != 0x158bbb)) {
                bVar7 = iVar6 == 0x15b2be;
                goto LAB_0064bec8;
              }
            }
          }
          else if (iVar6 < 0x164eff) {
            if (((((iVar6 != 0x164efe) && (iVar6 != 0x15d9cc)) &&
                 ((iVar6 != 0x15d9e8 && ((iVar6 != 0x1600e8 && (iVar6 != 0x160103)))))) &&
                (iVar6 != 0x1627f0)) && (iVar6 != 0x1627f6)) {
              bVar7 = iVar6 == 0x16280d;
LAB_0064bec8:
              if (!bVar7) goto LAB_0064bf04;
            }
          }
          else if (iVar6 < 0x167621) {
            if (((iVar6 != 0x167620) && (iVar6 != 0x164f03)) && (iVar6 != 0x164f18)) {
              bVar7 = iVar6 == 0x16761e;
              goto LAB_0064bec8;
            }
          }
          else if (iVar6 != 0x167637) {
            if (0x169d23 < iVar6) {
              if (iVar6 < 0x169d27) goto LAB_0064c048;
              if (0x16c433 < iVar6) {
                bVar8 = SBORROW4(iVar6,0x16c436);
                iVar2 = -0x16c436;
                bVar7 = iVar6 == 0x16c436;
                goto LAB_0064befe;
              }
            }
LAB_0064bf04:
            iVar2 = FUN_0044dddc(iVar6);
            if ((((iVar2 == 0x1e) || (iVar2 == 0x21)) ||
                ((iVar2 == 0x28 || (((iVar2 == 0x1f || (iVar2 == 0x29)) || (iVar2 == 0x2b)))))) ||
               (iVar2 == 0x2c)) {
              piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x30,0x6bf);
              if (*piVar3 != 0) {
                InterlockedIncrement((LONG *)(*piVar3 + 8));
              }
              FUN_00402fa6();
              iVar2 = *(int *)(unaff_EBP + -0x30);
              *piVar1 = *piVar3;
              if (iVar2 != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x30) = 0;
              }
            }
            else {
              if ((((iVar2 != 0x20) && (iVar2 != 0x2a)) &&
                  ((iVar2 != 0x2d && ((iVar2 != 0x2e && (iVar2 != 0x2f)))))) &&
                 ((iVar2 != 0x26 &&
                  ((((iVar2 != 0x25 && (iVar2 != 0x31)) && (iVar2 != 0x30)) && (iVar2 != 0x27))))))
              goto LAB_0064c087;
              piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x2c,0x6c0);
              if (*piVar3 != 0) {
                InterlockedIncrement((LONG *)(*piVar3 + 8));
              }
              FUN_00402fa6();
              iVar2 = *(int *)(unaff_EBP + -0x2c);
              *piVar1 = *piVar3;
              if (iVar2 != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x2c) = 0;
              }
            }
            iVar2 = *(int *)(unaff_EBP + 0x14);
            if ((((iVar2 == 8) || (iVar2 == 0xc)) ||
                ((iVar2 == 0xf || ((iVar2 == 0x12 || (iVar2 == 0x15)))))) ||
               ((iVar2 == 0x1b || (iVar2 == 0x1e)))) {
              puVar9 = &DAT_009683b0;
            }
            else {
              iVar2 = _rand();
              puVar9 = &DAT_00964308;
              if (iVar2 % 2 == 0) {
                puVar9 = &DAT_00964304;
              }
            }
            FUN_0049e7d6(puVar9);
            goto LAB_0064c087;
          }
LAB_0064c048:
          piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x34,0x9a2);
          if (*piVar3 != 0) {
            InterlockedIncrement((LONG *)(*piVar3 + 8));
          }
          FUN_00402fa6();
          iVar2 = *(int *)(unaff_EBP + -0x34);
          *piVar1 = *piVar3;
          if (iVar2 != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
          }
        }
        else {
          iVar2 = **(int **)(unaff_EBP + 8);
          if (iVar2 == 0x312609) {
            piVar3 = (int *)FUN_0064c0a8(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0xc),
                                         *(undefined4 *)(unaff_EBP + -0x10));
            FUN_00408b49();
            FUN_00402fa6();
            iVar2 = *(int *)(unaff_EBP + -0x20);
            *piVar1 = *piVar3;
            if (iVar2 != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
            }
          }
          else if (iVar2 == 0x4e23ef) {
            piVar3 = (int *)FUN_0064c0a8(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 0xc),
                                         *(undefined4 *)(unaff_EBP + -0x10));
            FUN_00408b49();
            FUN_00402fa6();
            iVar2 = *(int *)(unaff_EBP + -0x24);
            *piVar1 = *piVar3;
            if (iVar2 != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
            }
          }
          else {
            piVar3 = (int *)FUN_004ca340(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 0xc));
            FUN_00408b49();
            FUN_00402fa6();
            iVar2 = *(int *)(unaff_EBP + -0x28);
            *piVar1 = *piVar3;
            if (iVar2 != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
            }
          }
          if (((int *)*piVar1 == (int *)0x0) || (iVar2 = *(int *)*piVar1, iVar2 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)(iVar2 + -4) >> 1;
          }
          if (uVar5 == 0) {
            iVar6 = *(int *)(unaff_EBP + 0x10);
            goto LAB_0064bf04;
          }
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x1c,0x914);
        iVar2 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00409205();
        }
        FUN_00434e21(unaff_EBP + -0x18,uVar4,*(int *)(unaff_EBP + 0x1c) / 10000,
                     *(int *)(unaff_EBP + 0x1c));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        FUN_00432cfc(*(undefined4 *)(unaff_EBP + -0x18));
        FUN_00408b49();
        FUN_00402fa6();
        iVar2 = *(int *)(unaff_EBP + -0x14);
        *piVar1 = iVar2;
        if (iVar2 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
LAB_0064c087:
      iVar2 = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x10) = iVar2;
    } while (iVar2 < *(int *)(unaff_EBP + 0x18));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


