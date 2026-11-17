/* FUN_0055176a - 0x0055176a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055176a(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *piStack_94;
  int *piStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_90 = (int *)0x551791;
    FUN_00878dfb();
  }
  piStack_90 = (int *)0x55179d;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_90 = (int *)0x5517aa;
  FUN_004035f5();
  FUN_004027b3();
  piStack_90 = (int *)0x5517be;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      piStack_90 = (int *)0x5517d4;
      FUN_00878dfb();
    }
    piStack_90 = (int *)(unaff_EBP + -0x78);
    piStack_94 = (int *)0x1;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0xc))(*(int **)(unaff_EBP + -0x24));
    if (iVar2 != 0) break;
    piStack_90 = (int *)(unaff_EBP + -0x20);
    piStack_94 = (int *)0x5517fc;
    FUN_00405a23();
    if (*(undefined4 **)(unaff_EBP + -0x20) == (undefined4 *)0x0) {
      piStack_94 = (int *)0x0;
    }
    else {
      piStack_94 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
    }
    piStack_90 = (int *)(unaff_EBP + -0x3c);
    uVar3 = FUN_0087bb75();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_90 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x40) = &piStack_94;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004059fd(unaff_EBP + -0x20);
    iVar2 = unaff_EBP + -0x88;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_94 = (int *)0x551859;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    piStack_90 = (int *)0x551868;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_90 = (int *)0x551879;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_90 = (int *)0x551889;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_90 = (int *)0x551894;
      FUN_00878dfb();
    }
    if (**(short **)(unaff_EBP + -0x3c) == 0) {
      piStack_90 = (int *)(unaff_EBP + -0x40);
      *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
      piStack_94 = (int *)0x5518cc;
      FUN_0055967b();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_90 = (int *)0x5518dd;
        FUN_00878dfb();
      }
      piStack_90 = (int *)0x5518e9;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_90 = (int *)0x5518f6;
      FUN_004035f5();
      FUN_004027b3();
      piStack_90 = (int *)0x551904;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_90 = (int *)0x55191a;
          FUN_00878dfb();
        }
        piStack_90 = (int *)(unaff_EBP + -0x68);
        piStack_94 = (int *)0x1;
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))(*(int **)(unaff_EBP + -0x1c));
        if (iVar2 != 0) break;
        piStack_90 = (int *)(unaff_EBP + -0x18);
        piStack_94 = (int *)0x551942;
        FUN_00405a23();
        piStack_90 = (int *)(unaff_EBP + -0x18);
        *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff74;
        piStack_94 = (int *)0x551953;
        FUN_0040810c();
        piStack_90 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_94 = (int *)0x551963;
        FUN_0040263d();
        piStack_94 = (int *)0x55196a;
        FUN_004048a4();
        piStack_90 = *(int **)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(short *)(unaff_EBP + -0x58) != 8) {
          piStack_90 = (int *)&DAT_0097812c;
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        piStack_94 = (int *)0x55198b;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        else {
          uVar3 = FUN_00409205();
          *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
        }
        piStack_90 = (int *)(unaff_EBP + -0x2c);
        piStack_94 = (int *)0x5519b2;
        FUN_00559c38();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_90 = (int *)0x5519c6;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_90 = (int *)0x5519d4;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_90 = (int *)0x5519df;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00402fa6();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_90 = (int *)0x5519fd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_90 = (int *)0x551a08;
        FUN_00878dfb();
      }
      FUN_004027f8();
    }
    else {
      *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff74;
      piStack_90 = (int *)0x5518ac;
      FUN_004125cc();
      piStack_90 = (int *)0x5518b4;
      FUN_0055176a();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_90 = (int *)0x551a21;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402fa6();
  }
  if (DAT_0097c1a8 == (int *)0x0) {
    piStack_90 = (int *)0x551a44;
    FUN_00878dfb();
  }
  piVar1 = DAT_0097c1a8;
  piStack_90 = DAT_0097c1a8;
  piStack_94 = (int *)0x551a51;
  iVar2 = (**(code **)(*DAT_0097c1a8 + 0x24))();
  if (iVar2 < 0) {
    piStack_94 = (int *)&DAT_00963cf8;
    FUN_00878e09(iVar2,piVar1);
  }
  piStack_94 = (int *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_94 = (int *)FUN_00402bc3();
  if ((int)piStack_94 < 0) {
    FUN_00878dfb();
  }
  piStack_94 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  piStack_94 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


