/* FUN_50404178 - 0x50404178 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50404178(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff5c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x40) == 0) {
    FUN_5040483b();
    return;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 0x90) == 0) {
    FUN_5040483b();
    return;
  }
  Ordinal_8(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (((*(short *)(unaff_EBP + 0x30) == 0) || (*(short *)(unaff_EBP + 0x30) == 10)) ||
     (iVar3 = FUN_50405194((ushort *)(unaff_EBP + -0x20),(ushort *)(unaff_EBP + 0x30),0,0x13),
     -1 < iVar3)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_5040569d((void *)(unaff_EBP + 8));
    FUN_50409969();
    if (((*(short *)(unaff_EBP + 0x20) == 0) || (*(short *)(unaff_EBP + 0x20) == 10)) ||
       (iVar3 = FUN_50405194((ushort *)(unaff_EBP + -0x20),(ushort *)(unaff_EBP + 0x20),0,0x13),
       -1 < iVar3)) {
      if (*(short *)(unaff_EBP + -0x20) == 0x13) {
        *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x18);
      }
      else {
        *(undefined4 *)(unaff_EBP + 0x1c) = 1;
      }
      if (*(uint *)(unaff_EBP + 0x1c) < 0x401) {
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
LAB_504045ad:
          *(undefined1 *)(unaff_EBP + -4) = 0;
          **(undefined4 **)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x20));
          if (iVar3 < 0) {
            FUN_5042a358(iVar3);
          }
          FUN_5040483b();
          return;
        }
        if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x18) != 0)) {
          while (*(int *)(unaff_EBP + 0x1c) != 0) {
            *(undefined4 *)(unaff_EBP + 0x10) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            FUN_504056f1(u_Canvas_50435378,
                         (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x10),0);
            FUN_504057b7((short *)(unaff_EBP + -0x50));
            *(undefined1 *)(unaff_EBP + -4) = 4;
            FUN_504057b7((short *)(unaff_EBP + -0x70));
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              FUN_5042a358(0x80004003);
            }
            piVar4 = *(int **)(unaff_EBP + 0x10);
            iVar3 = (**(code **)(*piVar4 + 0x2c))
                              (piVar4,*(undefined4 *)(unaff_EBP + 0x14),
                               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + -0x70),
                               *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68)
                               ,*(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x50)
                               ,*(undefined4 *)(unaff_EBP + -0x4c),
                               *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44)
                              );
            if (iVar3 < 0) {
              FUN_5042a366(iVar3,piVar4,&DAT_50435388);
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x70));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x50));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            FUN_504057b7((short *)(unaff_EBP + -0x80));
            *(undefined1 *)(unaff_EBP + -4) = 6;
            FUN_504057b7((short *)(unaff_EBP + -0x90));
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_504057b7((short *)(unaff_EBP + -0x60));
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_504057b7((short *)(unaff_EBP + -0x30));
            *(undefined1 *)(unaff_EBP + -4) = 9;
            FUN_504057b7((short *)(unaff_EBP + -0x40));
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (*(int *)(unaff_EBP + 8) == 0) {
              FUN_5042a358(0x80004003);
            }
            FUN_50407a5a(*(void **)(unaff_EBP + 8),(void *)(unaff_EBP + -0xa4),
                         *(undefined4 *)(unaff_EBP + 0x10),(undefined4 *)(unaff_EBP + -0x40),
                         (undefined4 *)(unaff_EBP + -0x30),(undefined4 *)(unaff_EBP + -0x60),
                         (undefined4 *)(unaff_EBP + -0x90),(undefined4 *)(unaff_EBP + -0x80));
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0xa4));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 9;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x40));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x30));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x60));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x90));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x80));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            FUN_50404f4f((int *)(unaff_EBP + 0x10));
            *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + -1;
          }
          goto LAB_504045ad;
        }
      }
      FUN_50404f4f((int *)(unaff_EBP + 8));
    }
    else {
      iVar3 = FUN_50405194((ushort *)(unaff_EBP + -0x20),(ushort *)(unaff_EBP + 0x20),0,0xd);
      if (-1 < iVar3) {
        iVar3 = FUN_504062ba();
        *(int *)(unaff_EBP + 0x1c) = iVar3;
        *(undefined4 *)(unaff_EBP + 0x18) = 0;
        if (((iVar3 != 0) &&
            (iVar3 = FUN_504060e1((void *)(unaff_EBP + 0x18),(int *)(unaff_EBP + 0x1c)), iVar3 < 0))
           && (iVar3 != -0x7fffbffe)) {
          FUN_5042a358(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        bVar2 = FUN_50405008((void *)(unaff_EBP + 0x18),0);
        if (bVar2) {
          iVar3 = FUN_504062ba();
          *(int *)(unaff_EBP + 0x10) = iVar3;
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          if (((iVar3 != 0) &&
              (iVar3 = FUN_50406141((void *)(unaff_EBP + 0x14),(int *)(unaff_EBP + 0x10)), iVar3 < 0
              )) && (iVar3 != -0x7fffbffe)) {
            FUN_5042a358(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int *)(unaff_EBP + 0x14) != 0) {
            FUN_504057b7((short *)(unaff_EBP + -0x60));
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_504057b7((short *)(unaff_EBP + -0x30));
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_504057b7((short *)(unaff_EBP + -0x40));
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_504057b7((short *)(unaff_EBP + -0x50));
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            FUN_504057b7((short *)(unaff_EBP + -0x70));
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            if (*(int *)(unaff_EBP + 8) == 0) {
              FUN_5042a358(0x80004003);
            }
            FUN_50407a5a(*(void **)(unaff_EBP + 8),(void *)(unaff_EBP + -0x80),
                         *(undefined4 *)(unaff_EBP + 0x14),(undefined4 *)(unaff_EBP + -0x70),
                         (undefined4 *)(unaff_EBP + -0x50),(undefined4 *)(unaff_EBP + -0x40),
                         (undefined4 *)(unaff_EBP + -0x30),(undefined4 *)(unaff_EBP + -0x60));
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x80));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x70));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x50));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x40));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x30));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x60));
            if (iVar3 < 0) {
              FUN_5042a358(iVar3);
            }
          }
          piVar4 = *(int **)(unaff_EBP + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4);
          }
        }
        else {
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            FUN_5042a358(0x80004003);
          }
          piVar4 = FUN_50407927(*(int **)(unaff_EBP + 0x18));
          *(int **)(unaff_EBP + 0x14) = piVar4;
          for (iVar3 = 0; iVar3 < *(int *)(unaff_EBP + 0x14); iVar3 = iVar3 + 1) {
            FUN_504057b7((short *)(unaff_EBP + -0x70));
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_504057b7((short *)(unaff_EBP + -0x50));
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_504057b7((short *)(unaff_EBP + -0x40));
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_504057b7((short *)(unaff_EBP + -0x30));
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            FUN_504057b7((short *)(unaff_EBP + -0x60));
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            FUN_50405839((void *)(unaff_EBP + -0x90),iVar3,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int *)(unaff_EBP + 0x18) == 0) {
              FUN_5042a358(0x80004003);
            }
            puVar5 = (undefined4 *)
                     FUN_50407a15(*(void **)(unaff_EBP + 0x18),(undefined4 *)(unaff_EBP + 0x10),
                                  (undefined4 *)(unaff_EBP + -0x90));
            uVar1 = *puVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            if (*(int *)(unaff_EBP + 8) == 0) {
              FUN_5042a358(0x80004003);
            }
            FUN_50407a5a(*(void **)(unaff_EBP + 8),(void *)(unaff_EBP + -0x80),uVar1,
                         (undefined4 *)(unaff_EBP + -0x60),(undefined4 *)(unaff_EBP + -0x30),
                         (undefined4 *)(unaff_EBP + -0x40),(undefined4 *)(unaff_EBP + -0x50),
                         (undefined4 *)(unaff_EBP + -0x70));
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x80));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            FUN_50404f4f((int *)(unaff_EBP + 0x10));
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x90));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x60));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x30));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x40));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x50));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x70));
            if (iVar6 < 0) {
              FUN_5042a358(iVar6);
            }
          }
        }
        piVar4 = *(int **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        goto LAB_504045ad;
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_5042a358(iVar3);
  }
  FUN_5040483b();
  return;
}


