/* FUN_0075648f - 0x0075648f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075648f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar4 = *(int *)(extraout_ECX + 8) + *(int *)(unaff_EBP + 8) * -0x22;
    iStack_a8 = 3;
    iStack_ac = 0;
    *(int *)(unaff_EBP + -0x14) = iVar4 + -0x14;
    uStack_b0 = 0x7564cd;
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iStack_a8 = 0x80004003;
      iStack_ac = 0x7564df;
      FUN_00878dfb();
    }
    iStack_a8 = unaff_EBP + -0x74;
    iStack_ac = unaff_EBP + 8;
    uStack_b0 = 0x7564ef;
    FUN_00425067();
    iStack_a8 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_ac = 0x7564fc;
    iStack_a8 = FUN_00402bc3();
    if (iStack_a8 < 0) {
      iStack_ac = 0x756507;
      FUN_00878dfb();
    }
    iStack_a8 = 3;
    iStack_ac = 0xff;
    uStack_b0 = 0x756516;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x4dc);
    piStack_c4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_c4 == (int *)0x0) {
      iStack_a8 = 0x80004003;
      iStack_ac = 0x756534;
      FUN_00878dfb();
      piStack_c4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piStack_c4;
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_b4 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_bc = iVar4 + -0x13;
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_c0 = 10;
    *(int **)(unaff_EBP + -0x1c) = piStack_c4;
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x38);
    piStack_c8 = (int *)0x756556;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      piStack_c8 = (int *)&DAT_00963cc8;
      iStack_cc = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_d4 = 0x756568;
      iStack_d0 = iVar2;
      FUN_00878e09();
    }
    piStack_c8 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_cc = 0x756575;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      iStack_cc = 0x756580;
      FUN_00878dfb();
    }
    piStack_c8 = &DAT_00980690;
    iStack_cc = 0x75658e;
    FUN_00403191();
    piStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_cc = 0x75659b;
    FUN_00403191();
    piStack_c8 = (int *)(unaff_EBP + -100);
    iStack_cc = unaff_EBP + -0x44;
    iStack_d0 = 0x10;
    iStack_d4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_d0 = 0x7565c0;
    iStack_d0 = FUN_00449749();
    *(int **)(unaff_EBP + -0x30) = &iStack_d4;
    FUN_00679e4e(&iStack_d4,0x7c4);
    iVar4 = *(int *)(unaff_EBP + -0x14);
    iVar2 = iVar4 + -3;
    uVar5 = 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004115d9(0x10,iVar2);
    FUN_00448e3a(uVar5,iVar2);
    piStack_c8 = (int *)0x7565fb;
    FUN_004497b5();
    piStack_c8 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_cc = 0x756608;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      iStack_cc = 0x756613;
      FUN_00878dfb();
    }
    piStack_c8 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_cc = 0x756620;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      iStack_cc = 0x75662b;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar4 + 0xf;
    puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + 0xc) + 0x40);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (puVar3 != (undefined4 *)0x0) {
      *(int *)(unaff_EBP + -0x18) = iVar4 + 0x11;
      while( true ) {
        piStack_c8 = (int *)*puVar3;
        iVar2 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
        *(undefined4 **)(unaff_EBP + -0x34) = puVar3;
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        iStack_cc = 0x756680;
        iVar2 = FUN_0064d61f();
        *(int *)(unaff_EBP + -0x2c) = iVar2;
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar2 + 0x90);
        piStack_c8 = (int *)0x756694;
        FUN_004125f3();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_c8 = (int *)0x80004003;
          iStack_cc = 0x7566a9;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + 8);
        piStack_c8 = (int *)0xa0ffffff;
        iStack_cc = 0x22;
        iStack_d0 = 0x22;
        iStack_d4 = *(int *)(unaff_EBP + -0x18) + -3;
        iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,10);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
        }
        iVar2 = *(int *)(unaff_EBP + 0xc);
        *(int *)(unaff_EBP + -0x28) = iVar2;
        *(int *)(unaff_EBP + -0x4c) = iVar2;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x1c) = piVar1;
        uVar5 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0x50) = uVar5;
        uVar5 = FUN_0040e48b();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar2 = FUN_0040eea9();
        iVar2 = (**(code **)(*piVar1 + 0x84))
                          (*(undefined4 *)(unaff_EBP + -0x1c),0xb - iVar2,
                           *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x4c),
                           0xff,*(undefined4 *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x50),0,0,0,0,
                           *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                           *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58));
        if (iVar2 < 0) {
          piStack_c8 = (int *)&DAT_00963cc8;
          iStack_cc = *(undefined4 *)(unaff_EBP + -0x1c);
          iStack_d4 = 0x756787;
          iStack_d0 = iVar2;
          FUN_00878e09();
        }
        piStack_c8 = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_cc = 0x756794;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x75679f;
          FUN_00878dfb();
        }
        piStack_c8 = &DAT_00980690;
        iStack_cc = 0x7567ab;
        FUN_00403191();
        piStack_c8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_cc = 0x7567b8;
        FUN_00403191();
        piStack_c8 = (int *)(unaff_EBP + -0x94);
        iStack_cc = unaff_EBP + -0x44;
        iStack_d0 = 0x11;
        iStack_d4 = unaff_EBP + -0x54;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00756efd();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_d0 = 0x7567e0;
        iStack_d0 = FUN_00449749();
        iStack_d4 = 0x7567ec;
        uVar5 = FUN_00449713();
        *(int **)(unaff_EBP + -0x2c) = &iStack_d4;
        FUN_00448a17(uVar5);
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar6 = 0x32;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004115d9(0x32,uVar5);
        FUN_00448e3a(uVar6,uVar5);
        piStack_c8 = (int *)0x756818;
        FUN_004497b5();
        piStack_c8 = (int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_cc = 0x756825;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x756830;
          FUN_00878dfb();
        }
        piStack_c8 = (int *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_cc = 0x756840;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x75684b;
          FUN_00878dfb();
        }
        piStack_c8 = (int *)0x7c3;
        iStack_cc = unaff_EBP + -0x48;
        iStack_d0 = 0x75685e;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_c8 = *(int **)(*(int *)(unaff_EBP + -0x34) + 4);
        iStack_cc = *puVar3;
        iStack_d0 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_d4 = 0x756874;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          piStack_c8 = (int *)(*(int *)(unaff_EBP + -0x48) + -0xc);
          iStack_cc = 0x75688b;
          FUN_00434e38();
        }
        piStack_c8 = &DAT_00980690;
        iStack_cc = 0x756898;
        FUN_00403191();
        piStack_c8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_cc = 0x7568a8;
        FUN_00403191();
        piStack_c8 = (int *)(unaff_EBP + -0xa4);
        iStack_cc = unaff_EBP + -0x84;
        iStack_d0 = 0x11;
        iStack_d4 = unaff_EBP + -0x30;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_00756efd();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_d0 = 0x7568d3;
        iStack_d0 = FUN_00449749();
        iStack_d4 = 0x7568dc;
        uVar5 = FUN_00449713();
        *(int **)(unaff_EBP + -0x34) = &iStack_d4;
        FUN_00448a17(uVar5);
        iVar2 = *(int *)(unaff_EBP + -0x18) + 0xc;
        uVar5 = 0x32;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9(0x32,iVar2);
        FUN_00448e3a(uVar5,iVar2);
        piStack_c8 = *(int **)(unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (piStack_c8 != (int *)0x0) {
          iStack_cc = 0x756915;
          (**(code **)(*piStack_c8 + 8))();
        }
        piStack_c8 = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_cc = 0x756925;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x756930;
          FUN_00878dfb();
        }
        piStack_c8 = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_cc = 0x756940;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x75694b;
          FUN_00878dfb();
        }
        piStack_c8 = *(int **)(unaff_EBP + 0xc);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x22;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x22;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piStack_c8 != (int *)0x0) {
          iStack_cc = 0x756964;
          (**(code **)(*piStack_c8 + 8))();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_c8 = (int *)0x756979;
    FUN_00414ebb();
    piStack_c8 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_c8 != (int *)0x0) {
      iStack_cc = 0x75698a;
      (**(code **)(*piStack_c8 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


