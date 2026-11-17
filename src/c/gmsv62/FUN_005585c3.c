/* FUN_005585c3 - 0x005585c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005585c3(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  piStack_d0 = (int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_d4 = (int *)0x5585f4;
  FUN_00679d86();
  piStack_d0 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_d4 = (int *)0x558602;
  piStack_d8 = (int *)FUN_00411641();
  *(int ***)(unaff_EBP + -0x3c) = &piStack_d4;
  iStack_dc = 0x55860e;
  FUN_004033a1();
  piStack_d8 = (int *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x55861e;
  FUN_00559a18();
  iStack_dc = 0x558625;
  FUN_005593dc();
  iStack_dc = 0x55862c;
  FUN_00559498();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_d4 = (int *)0x558637;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    piStack_d0 = (int *)0x55864d;
    iVar2 = FUN_0055cc56();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_d0 = (int *)0x55865e;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_d0 = (int *)0x55866e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_d0 = (int *)0x558679;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    piStack_d0 = (int *)0x558688;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)0x558694;
  FUN_00559523();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_d0 = (int *)0x5586a1;
  FUN_004035f5();
  FUN_004027b3();
  piStack_d0 = (int *)0x5586b3;
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  piStack_d0 = (int *)(unaff_EBP + -100);
  piStack_d4 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  piStack_d8 = (int *)0x5586ca;
  iVar2 = FUN_00559dbc();
  while (iVar2 != 0) {
    piStack_d0 = *(int **)(unaff_EBP + -0x5c);
    if (*(short *)(unaff_EBP + -100) != 8) {
      piStack_d0 = (int *)&DAT_0097812c;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    piStack_d4 = (int *)0x5586f7;
    FUN_004184ca();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_d0 = (int *)0x558707;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_d0 = (int *)0x558717;
    FUN_00403191();
    piStack_d0 = (int *)0x0;
    piStack_d4 = (int *)(unaff_EBP + -0x88);
    piStack_d8 = (int *)(unaff_EBP + -0x98);
    iStack_dc = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0046fc68(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_dc = 0x558746;
    uVar3 = FUN_00411641();
    *(int **)(unaff_EBP + -0x30) = &iStack_dc;
    iStack_dc = extraout_ECX_00;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_d4 = (int *)0x55877b;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_d0 = (int *)0x558791;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_d0 = (int *)0x5587a2;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d0 = (int *)0x5587b2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d0 = (int *)0x5587bd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      piStack_d0 = (int *)0x5587d1;
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_d0 = (int *)0x5587e2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d0 = (int *)0x5587ed;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_d0 = (int *)0x5587fd;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d0 = (int *)0x558808;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_d0 = (int *)0x558817;
      FUN_00878dfb();
    }
    piStack_d0 = (int *)0x558823;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_d0 = (int *)0x558830;
    FUN_004035f5();
    FUN_004027b3();
    piStack_d0 = (int *)0x558842;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        piStack_d0 = (int *)0x558858;
        FUN_00878dfb();
      }
      piStack_d8 = *(int **)(unaff_EBP + -0x28);
      piStack_d0 = (int *)(unaff_EBP + -0x74);
      piStack_d4 = (int *)0x1;
      iStack_dc = 0x55886b;
      iVar2 = (**(code **)(*piStack_d8 + 0xc))();
      if (iVar2 != 0) break;
      piStack_d0 = (int *)(unaff_EBP + -0x2c);
      piStack_d4 = (int *)0x558880;
      piVar1 = (int *)(unaff_EBP + -0x74);
      FUN_00405a23();
      piStack_d4 = piVar1;
      piStack_d0 = (int *)0x0;
      piStack_d8 = (int *)(unaff_EBP + -0x2c);
      *(int ***)(unaff_EBP + -0x30) = &piStack_d4;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_dc = 0x558897;
      FUN_004059fd();
      piStack_d8 = (int *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_dc = 0x5588aa;
      FUN_0040263d();
      iStack_dc = 0x5588b1;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_d4 = (int *)0x5588bc;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x3c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar2 != 0) {
        piStack_d0 = (int *)0x5588d2;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_d0 = (int *)0x5588e3;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_d0 = (int *)0x5588f3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d0 = (int *)0x5588fe;
        FUN_00878dfb();
      }
      piStack_d0 = (int *)0x558911;
      iVar2 = FUN_0087a208();
      if (iVar2 / 10000 == 0x20c) {
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff34;
        piStack_d0 = (int *)0x558933;
        FUN_004125cc();
        piStack_d4 = (int *)0x55893c;
        piStack_d0 = (int *)iVar2;
        FUN_00551ba7();
      }
      else if (iVar2 / 1000 == 0x14a1) {
        piStack_d0 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff34;
        if (piStack_d0 != (int *)0x0) {
          piStack_d4 = (int *)0x558967;
          (**(code **)(*piStack_d0 + 4))();
        }
        piStack_d4 = (int *)0x558970;
        piStack_d0 = (int *)iVar2;
        FUN_00551dff();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_d0 = (int *)0x558981;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00402fa6();
      piStack_d0 = (int *)0x558996;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d0 = (int *)0x5589a5;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_d0 = (int *)0x5589b7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d0 = (int *)0x5589c2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      piStack_d0 = (int *)0x5589d3;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_d0 = (int *)0x5589e4;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00402676();
    piStack_d0 = (int *)0x5589f9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d0 = (int *)0x558a04;
      FUN_00878dfb();
    }
    piStack_d0 = (int *)(unaff_EBP + -100);
    piStack_d4 = *(int **)(unaff_EBP + -0x24);
    piStack_d8 = (int *)0x558a14;
    iVar2 = FUN_00559dbc();
  }
  if (DAT_0097c1a8 == (int *)0x0) {
    piStack_d0 = (int *)0x558a31;
    FUN_00878dfb();
  }
  piVar1 = DAT_0097c1a8;
  piStack_d0 = DAT_0097c1a8;
  piStack_d4 = (int *)0x558a3e;
  iVar2 = (**(code **)(*DAT_0097c1a8 + 0x24))();
  if (iVar2 < 0) {
    piStack_d4 = (int *)&DAT_00963cf8;
    piStack_d8 = piVar1;
    iStack_dc = iVar2;
    FUN_00878e09();
  }
  piStack_d4 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_d8 = (int *)0x558a5b;
  piStack_d4 = (int *)FUN_00402bc3();
  if ((int)piStack_d4 < 0) {
    piStack_d8 = (int *)0x558a66;
    FUN_00878dfb();
  }
  piStack_d4 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_d4 != (int *)0x0) {
    piStack_d8 = (int *)0x558a77;
    (**(code **)(*piStack_d4 + 8))();
  }
  piStack_d4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_d4 != (int *)0x0) {
    piStack_d8 = (int *)0x558a88;
    (**(code **)(*piStack_d4 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_d4 = (int *)0x558a93;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


