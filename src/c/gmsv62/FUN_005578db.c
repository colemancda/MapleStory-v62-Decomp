/* FUN_005578db - 0x005578db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005578db(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int *piStack_84;
  wchar_t *pwStack_80;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    pwStack_80 = (wchar_t *)0x557902;
    FUN_00878dfb();
  }
  pwStack_80 = (wchar_t *)0x55790e;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pwStack_80 = (wchar_t *)0x55791b;
  FUN_004035f5();
  FUN_004027b3();
  pwStack_80 = (wchar_t *)0x55792d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  do {
    while( true ) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        pwStack_80 = (wchar_t *)0x557943;
        FUN_00878dfb();
      }
      pwStack_80 = (wchar_t *)(unaff_EBP + -0x68);
      piStack_84 = (int *)0x1;
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0xc))(*(int **)(unaff_EBP + -0x28));
      if (iVar2 != 0) {
        if (DAT_0097c1a8 == (int *)0x0) {
          pwStack_80 = (wchar_t *)0x557bb6;
          FUN_00878dfb();
        }
        piVar1 = DAT_0097c1a8;
        pwStack_80 = (wchar_t *)DAT_0097c1a8;
        piStack_84 = (int *)0x557bc3;
        iVar2 = (**(code **)(*DAT_0097c1a8 + 0x24))();
        if (iVar2 < 0) {
          piStack_84 = (int *)&DAT_00963cf8;
          FUN_00878e09(iVar2,piVar1);
        }
        piStack_84 = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_84 = (int *)FUN_00402bc3();
        if ((int)piStack_84 < 0) {
          FUN_00878dfb();
        }
        piStack_84 = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piStack_84 != (int *)0x0) {
          (**(code **)(*piStack_84 + 8))();
        }
        piStack_84 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_84 != (int *)0x0) {
          (**(code **)(*piStack_84 + 8))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      pwStack_80 = (wchar_t *)(unaff_EBP + -0x18);
      piStack_84 = (int *)0x55796b;
      FUN_00405a23();
      if (*(undefined4 **)(unaff_EBP + -0x18) == (undefined4 *)0x0) {
        piStack_84 = (int *)0x0;
      }
      else {
        piStack_84 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
      }
      pwStack_80 = (wchar_t *)(unaff_EBP + -0x3c);
      iVar3 = FUN_0087bb75();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      pwStack_80 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + -0x40) = &piStack_84;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004059fd(unaff_EBP + -0x18);
      iVar2 = unaff_EBP + -0x78;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_84 = (int *)0x5579c5;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      pwStack_80 = (wchar_t *)0x5579d4;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        pwStack_80 = (wchar_t *)0x5579e5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      pwStack_80 = (wchar_t *)0x5579f2;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        pwStack_80 = (wchar_t *)0x5579fd;
        FUN_00878dfb();
      }
      if (**(short **)(unaff_EBP + -0x3c) == 0) break;
      *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff84;
      pwStack_80 = (wchar_t *)0x557a15;
      FUN_004125cc();
      pwStack_80 = (wchar_t *)0x557a1d;
      FUN_005578db();
LAB_00557b77:
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        pwStack_80 = (wchar_t *)0x557b88;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
    }
    if (iVar3 < 5000000) {
      pwStack_80 = (wchar_t *)(unaff_EBP + -0x40);
      *(int *)(unaff_EBP + -0x40) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      piStack_84 = (int *)0x557a46;
      FUN_0055a60a();
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff84;
        pwStack_80 = u_name_00965660;
        piStack_84 = (int *)0x557a74;
        FUN_00402e8e();
        pwStack_80 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        piStack_84 = (int *)0x557a84;
        FUN_0040263d();
        piStack_84 = (int *)0x557a8b;
        FUN_004048a4();
        pwStack_80 = *(wchar_t **)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(short *)(unaff_EBP + -0x58) != 8) {
          pwStack_80 = (wchar_t *)&DAT_0097812c;
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        piStack_84 = (int *)0x557aac;
        FUN_00454081();
        pwStack_80 = (wchar_t *)&DAT_00978474;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        piStack_84 = (int *)0x557ac2;
        FUN_00414edd();
        iVar2 = *(int *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar6 = 0;
        while( true ) {
          if (iVar2 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar2 + -4);
          }
          if (iVar5 <= iVar6) break;
          if (*(char *)(iVar6 + iVar2) != ' ') {
            *(char *)(unaff_EBP + -0xd) = *(char *)(iVar6 + iVar2);
            pwStack_80 = (wchar_t *)(unaff_EBP + -0xd);
            piStack_84 = (int *)0x557af2;
            FUN_0045efbb();
            iVar2 = *(int *)(unaff_EBP + -0x20);
          }
          iVar6 = iVar6 + 1;
        }
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        FUN_005597c4();
        *(int *)(*(int *)(unaff_EBP + -0x44) + 4) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        pwStack_80 = L"䖋跜Ⲉ\x01\xe800Ⰱ";
        FUN_00414f8b();
        FUN_0055a728();
        pwStack_80 = L"崹욼ﱅ琌匌䶍\xe8b8ᶻ";
        FUN_005598d0();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (*(int *)(unaff_EBP + -0x44) != 0) {
          pwStack_80 = (wchar_t *)0x557b44;
          FUN_005598ff();
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        pwStack_80 = (wchar_t *)0x557b6c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          pwStack_80 = (wchar_t *)0x557b77;
          FUN_00878dfb();
        }
        goto LAB_00557b77;
      }
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402fa6();
  } while( true );
}


