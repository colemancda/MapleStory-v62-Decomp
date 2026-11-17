/* FUN_00554656 - 0x00554656 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00554656(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *_Str1;
  int iVar8;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str2;
  
  FUN_00879bb8();
  iVar4 = **(int **)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar4 + -4);
  }
  FUN_00445a30();
  piVar3 = *(int **)(extraout_ECX + 0x28);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(extraout_ECX + 0x2c);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar4 = *piVar3;
        goto LAB_005546a8;
      }
    }
  }
  iVar4 = 0;
LAB_005546a8:
  *(int *)(unaff_EBP + -0x34) = iVar4;
  do {
    if (iVar4 == 0) {
      if (**(int **)(unaff_EBP + 0x10) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(**(int **)(unaff_EBP + 0x10) + -4);
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar4 != 0;
    }
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0x1f;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined ***)(unaff_EBP + -0x60) = &PTR_FUN_008eba50;
    FUN_00559ee0(100);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar3 = (int *)FUN_0055a03c(unaff_EBP + -0x34,unaff_EBP + -0x60);
    iVar4 = *piVar3;
    *(int *)(unaff_EBP + -0x48) = iVar4;
    if (((*(int *)(unaff_EBP + 8) == 0) ||
        (iVar4 = iVar4 / 1000000, iVar4 == *(int *)(unaff_EBP + 8))) || (iVar4 == 5)) {
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x3c,0x64b);
      *(undefined4 *)(unaff_EBP + -0x38) = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar6 = FUN_00559467(unaff_EBP + -0x38,0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00414f8b(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x3c) + -0xc);
      }
      FUN_00495ba8();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + -4);
      }
      *(undefined1 *)(unaff_EBP + -0xd) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined1 *)(unaff_EBP + -0xe) = 0x80;
      FUN_00414edd(unaff_EBP + -0xe,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      iVar4 = 0;
      piVar3 = (int *)(unaff_EBP + -0x24);
      *piVar3 = *piVar3 - *(int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (-1 < *piVar3) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x2c);
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
        do {
          uVar6 = *(undefined4 *)(unaff_EBP + -0x20);
          FUN_0045ece0(unaff_EBP + -0x44,0,1);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar7 = FUN_004a3109(uVar6);
          if (iVar7 < 0) {
            _Str2 = *(char **)(unaff_EBP + -0x20);
            piVar3 = (int *)FUN_0045ece0(unaff_EBP + -0x40,iVar4,*(undefined4 *)(unaff_EBP + -0x18))
            ;
            if (_Str2 == (char *)0x0) {
              _Str2 = DAT_00980dfc;
            }
            _Str1 = (char *)*piVar3;
            if ((char *)*piVar3 == (char *)0x0) {
              _Str1 = DAT_00980dfc;
            }
            iVar7 = _strcmp(_Str1,_Str2);
            FUN_00414ebb();
            if (iVar7 < 1) goto LAB_00554819;
            bVar2 = true;
          }
          else {
LAB_00554819:
            bVar2 = false;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
          if (bVar2) {
            iVar4 = iVar4 + 1;
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          }
          else {
            FUN_0045ece0(unaff_EBP + -0x28,iVar4,*(undefined4 *)(unaff_EBP + -0x1c));
            *(undefined1 *)(unaff_EBP + -4) = 6;
            iVar7 = FUN_0045ec92(*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar7 != 0) {
              iVar7 = *(int *)(unaff_EBP + -0x48);
              iVar8 = FUN_005540b6(iVar7);
              if (((((iVar8 == 0) && (iVar8 = FUN_0055416a(iVar7), iVar8 == 0)) &&
                   ((iVar8 = FUN_005542d2(iVar7), iVar8 == 0 &&
                    ((iVar8 = FUN_00554386(iVar7), iVar8 == 0 &&
                     (iVar8 = FUN_0055443a(iVar7), iVar8 == 0)))))) &&
                  (iVar8 = FUN_00554b18(iVar7), iVar8 == 0)) &&
                 ((iVar7 / 10000 != 0xcf && (iVar7 / 10000 != 0xe9)))) {
                piVar3 = (int *)FUN_0045f1e3(0xffffffff);
                *piVar3 = iVar7;
                *(undefined1 *)(unaff_EBP + -4) = 4;
                FUN_00414ebb();
                break;
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            FUN_00414ebb();
          }
          iVar4 = iVar4 + 1;
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        } while (iVar4 <= *(int *)(unaff_EBP + -0x24));
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x60) = &PTR_FUN_008eba50;
      FUN_00559e8f();
    }
    else {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x60) = &PTR_FUN_008eba50;
      FUN_00559e8f();
    }
    iVar4 = *(int *)(unaff_EBP + -0x34);
  } while( true );
}


