/* FUN_0081874a - 0x0081874a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081874a(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(extraout_ECX + 0x94);
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(extraout_ECX + 0x98);
  FUN_00817e25((int *)(extraout_ECX + 0x94),0);
  uVar2 = DAT_009784c0;
  iVar5 = *(int *)(extraout_ECX + 0x94);
  uVar6 = *(undefined4 *)(extraout_ECX + 0x98);
  *(int *)(unaff_EBP + -0x2c) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piVar3 = (int *)FUN_00818edc(iVar5,uVar6);
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x2c))();
    iVar1 = *piVar3;
    *(int *)(unaff_EBP + -0x14) = iVar5 - iVar4;
    iVar5 = (**(code **)(iVar1 + 0x30))();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x28) - iVar5;
  }
  if (*(int *)(extraout_ECX + 0x7c) != 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    iVar5 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iVar5 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x24);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar5 = *piVar3;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar5 = (**(code **)(iVar5 + 0x94))
                      (piVar3,*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34),
                       *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    piVar3 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    piVar3 = *(int **)(extraout_ECX + 0x7c);
    iVar5 = *piVar3;
    iVar1 = piVar3[1];
    *(int **)(unaff_EBP + -0x24) = piVar3 + 1;
    uVar6 = (**(code **)(iVar1 + 0x30))();
    uVar6 = (**(code **)(piVar3[1] + 0x2c))(uVar6);
    (**(code **)(iVar5 + 0x14))(uVar6);
    iVar5 = FUN_005265f8(1);
    if (iVar5 != 0) goto LAB_00818c11;
    (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x18))();
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
    piVar3 = *(int **)(unaff_EBP + -0x1c);
  }
  if (*(int *)(extraout_ECX + 0x90) == 0) {
    piVar7 = *(int **)(extraout_ECX + 0x84);
    if (piVar3 != piVar7) {
      if (piVar7 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar7 + 0x20))();
        if (iVar5 != 0) {
          (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x14))(0);
        }
      }
      *(int **)(extraout_ECX + 0x84) = piVar3;
      if (piVar3 == (int *)0x0) goto LAB_00818c11;
      iVar5 = (**(code **)(*piVar3 + 0x20))();
      if (iVar5 != 0) {
        (**(code **)(*piVar3 + 0x14))(1);
      }
    }
    if (piVar3 != (int *)0x0) {
      _DAT_0097c230 = timeGetTime();
      iVar5 = *(int *)(unaff_EBP + 8);
      if (iVar5 == 0x200) {
        iVar5 = FUN_00818c24();
        if (iVar5 == 0) {
          FUN_005266d6(1);
        }
        iVar5 = (**(code **)(*piVar3 + 0x20))();
        if (iVar5 != 0) {
          (**(code **)(*piVar3 + 0xc))
                    (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
        }
      }
      else if (iVar5 == 0x20a) {
        iVar5 = (**(code **)(*piVar3 + 0x20))();
        if (iVar5 != 0) {
          (**(code **)(*piVar3 + 0x10))
                    (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),
                     (int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10) / -0x78);
        }
      }
      else {
        if (iVar5 == 0x201) {
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x9b4);
          if (iVar5 == 7) {
            uVar6 = 9;
          }
          else if (iVar5 == 8) {
            uVar6 = 10;
          }
          else {
            uVar6 = 0xc;
          }
          FUN_00526a75(uVar6);
          FUN_00817f6e(piVar3);
          iVar5 = (**(code **)(*piVar3 + 0x48))(&DAT_0097c228);
          if (iVar5 == 0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = piVar3 + -1;
          }
          if (piVar7 != (int *)0x0) {
            iVar5 = (**(code **)(*piVar7 + 0x24))
                              (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10)
                               ,0);
            if (iVar5 == 1) {
              *(int **)(extraout_ECX + 0x7c) = piVar7;
              goto LAB_00818c11;
            }
          }
        }
        else if ((iVar5 == 0x202) &&
                (((iVar5 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x9b4), iVar5 == 9 ||
                  (iVar5 == 10)) || (iVar5 == 0xc)))) {
          FUN_00526a75(0xffffffff);
        }
        iVar5 = (**(code **)(*piVar3 + 0x20))();
        if (iVar5 != 0) {
          (**(code **)(*piVar3 + 8))
                    (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
        }
      }
    }
    goto LAB_00818c11;
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
  iVar5 = FUN_00402e32(unaff_EBP + -0x74,&DAT_00980690);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  iVar5 = FUN_00402e32(unaff_EBP + -100,&DAT_00980690);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(extraout_ECX + 0x90);
  iVar1 = *(int *)(iVar5 + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(iVar5 + 0xc);
  iVar5 = *piVar3;
  *(int **)(unaff_EBP + -0x24) = piVar3;
  iVar5 = (**(code **)(iVar5 + 0x94))
                    (piVar3,*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34),
                     *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar5 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  piVar3 = *(int **)(extraout_ECX + 0x84);
  piVar7 = *(int **)(unaff_EBP + -0x1c);
  if (piVar7 == piVar3) {
LAB_00818a29:
    if (piVar7 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar7 + 0x20))();
      if (iVar5 != 0) {
        (**(code **)(*piVar7 + 0x10))
                  (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),
                   (int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10) / -0x78);
      }
      (**(code **)(*piVar7 + 0x18))
                (2,*(undefined4 *)(extraout_ECX + 0x90),*(undefined4 *)(unaff_EBP + -0x14),
                 *(undefined4 *)(unaff_EBP + -0x10));
    }
  }
  else {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x18))(0,*(undefined4 *)(extraout_ECX + 0x90),0,0);
    }
    *(int **)(extraout_ECX + 0x84) = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x18))
                (1,*(undefined4 *)(extraout_ECX + 0x90),*(undefined4 *)(unaff_EBP + -0x14),
                 *(undefined4 *)(unaff_EBP + -0x10));
      goto LAB_00818a29;
    }
  }
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    uVar6 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 0x203) goto LAB_00818c11;
    uVar6 = 1;
  }
  FUN_0081848d(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),uVar6);
LAB_00818c11:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


