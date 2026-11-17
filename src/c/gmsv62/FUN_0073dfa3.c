/* FUN_0073dfa3 - 0x0073dfa3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073dfa3(void)

{
  char cVar1;
  bool bVar2;
  BYTE *pBVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_1c;
  
  FUN_00879bb8();
  if ((*(uint *)(DAT_00978364 + 0x80) !=
       (-(uint)(*(int *)(extraout_ECX + 0xaa4) != 0) & *(int *)(extraout_ECX + 0xaa4) + 4U)) ||
     ((*(byte *)(unaff_EBP + 0xf) & 0x80) != 0)) goto LAB_0073e3cd;
  iVar6 = *(int *)(unaff_EBP + 8);
  if (iVar6 == 9) {
    iVar6 = *(int *)(extraout_ECX + 0xb28);
    if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
LAB_0073e086:
      iStack_1c = 0x73e08b;
      FUN_0073dcf0();
    }
    else if (iVar6 == 3) {
      iStack_1c = 0x73e029;
      puVar8 = (undefined4 *)FUN_0049e152();
      if (((char *)*puVar8 == (char *)0x0) || (*(char *)*puVar8 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      FUN_00414ebb();
      if (bVar2) {
        *(undefined4 *)(extraout_ECX + 0xc78) = 1;
        goto LAB_0073e086;
      }
      *(int **)(unaff_EBP + -0x14) = &iStack_1c;
      FUN_0049e152(&iStack_1c);
      FUN_00743a05();
      iStack_1c = 0x73e077;
      FUN_0073e65e();
    }
    else if (((iVar6 == 4) || (iVar6 == 5)) || (iVar6 == 6)) goto LAB_0073e086;
    FUN_004b3daf();
    iVar6 = *(int *)(unaff_EBP + 8);
  }
  if (iVar6 == 0xd) {
    iStack_1c = 0x73e0b1;
    FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX + -4;
    FUN_0073e6c0();
    iStack_1c = 0x400;
    pBVar3 = (BYTE *)FUN_00415015();
    while (*pBVar3 != '\0') {
      iStack_1c = 0x73e0e2;
      BVar4 = IsDBCSLeadByte(*pBVar3);
      if (BVar4 == 0) {
        if (((char)*pBVar3 < ' ') || ('~' < (char)*pBVar3)) {
          *pBVar3 = ' ';
        }
        pBVar3 = pBVar3 + 1;
      }
      else {
        pBVar3[1] = ' ';
        *pBVar3 = ' ';
        pBVar3 = pBVar3 + 2;
      }
    }
    iStack_1c = 0x73e10b;
    FUN_004150c0();
    iStack_1c = 0;
    FUN_0045ed72();
    iStack_1c = 0x73e11e;
    FUN_0045ee27();
    if ((*(char **)(unaff_EBP + 8) != (char *)0x0) &&
       (cVar1 = **(char **)(unaff_EBP + 8), cVar1 != '\0')) {
      if ((cVar1 != '/') &&
         (((*(char **)(extraout_ECX + 0xbbc) == (char *)0x0 ||
           (**(char **)(extraout_ECX + 0xbbc) == '\0')) && (*(int *)(extraout_ECX + 0xb28) == 5))))
      {
        *(int **)(unaff_EBP + -0x14) = &iStack_1c;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00679d22(unaff_EBP + 0xc,0xa8a);
        uVar11 = 0;
        uVar10 = 0xffffffff;
        uVar9 = 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar5 = FUN_00449713(0xc,0xffffffff,0);
        FUN_00743a59(uVar5,uVar9,uVar10,uVar11);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
      }
      iStack_1c = 0x73e19c;
      FUN_0073e65e();
      iStack_1c = 0x73e1a8;
      FUN_004a2fef();
      iVar6 = FUN_00429303();
      *(int *)(unaff_EBP + 0xc) = iVar6;
      if (iVar6 != 0) {
        if (**(char **)(unaff_EBP + 8) == '/') {
          iStack_1c = 0x73e1cb;
          FUN_004e8810();
          iStack_1c = unaff_EBP + 8;
          *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffe8;
          FUN_00414f8b();
          iStack_1c = 0x73e1e7;
          FUN_00471222();
        }
        else {
          iStack_1c = 0x73e1f7;
          iVar7 = FUN_00470f0f();
          iVar6 = DAT_00978358;
          if (iVar7 != 0) {
            if ((*(char **)(extraout_ECX + 0xbbc) == (char *)0x0) ||
               (**(char **)(extraout_ECX + 0xbbc) == '\0')) {
              if ((*(int *)(*(int *)(DAT_00978358 + 0x1744) + 4) != 0) &&
                 ((*(int *)(DAT_00978368 + 0x2d08) == 0 &&
                  ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) != 0x12)))) {
                iVar7 = 0;
                do {
                  if (*(int *)(*(int *)(iVar6 + 0x1744) + 4 + iVar7 * 8) != 0) {
                    iStack_1c = unaff_EBP + 8;
                    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffe8;
                    FUN_00414f8b();
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    iStack_1c = iVar7;
                    FUN_0073e3de();
                    iStack_1c = 0x73e288;
                    FUN_00615303();
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
              }
              iStack_1c = *(int *)(extraout_ECX + 0xb28);
              if (-1 < iStack_1c) {
                if (iStack_1c < 4) {
                  FUN_00747030();
                }
                else if (iStack_1c == 4) {
                  iStack_1c = 0x73e2c5;
                  FUN_00746eda();
                }
                else if (iStack_1c == 6) {
                  iStack_1c = unaff_EBP + 8;
                  FUN_004e8755();
                }
              }
              iStack_1c = 0x73e2de;
              iVar6 = FUN_0073e3ef();
              if (iVar6 != 0) {
                iStack_1c = 0x73e2f1;
                FUN_0084942e();
              }
            }
            else {
              iStack_1c = unaff_EBP + 8;
              FUN_004e99df();
            }
          }
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (iVar6 == 0x1b) {
      iStack_1c = 0x73e30f;
      FUN_004a2fef();
LAB_0073e348:
      FUN_0073e6c0();
      goto LAB_0073e3cd;
    }
    if ((iVar6 == 0x25) || (iVar6 == 0x27)) {
      iStack_1c = 0x73e32a;
      puVar8 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar8 == (char *)0x0) || (*(char *)*puVar8 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      FUN_00414ebb();
      if (bVar2) goto LAB_0073e348;
    }
    if (iVar6 == 0x26) {
      iStack_1c = 0x73e366;
      FUN_00471268();
      *(undefined4 *)(unaff_EBP + -4) = 5;
      if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
        iStack_1c = 0x73e385;
        FUN_004a2fef();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if (iVar6 != 0x28) goto LAB_0073e3cd;
      iStack_1c = 0x73e3a2;
      FUN_004712f1();
      *(undefined4 *)(unaff_EBP + -4) = 6;
      if ((*(char **)(unaff_EBP + 0xc) != (char *)0x0) && (**(char **)(unaff_EBP + 0xc) != '\0')) {
        iStack_1c = 0x73e3c1;
        FUN_004a2fef();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  FUN_00414ebb();
LAB_0073e3cd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


