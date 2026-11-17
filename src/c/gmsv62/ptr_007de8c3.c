/* ptr_007de8c3 - 0x007de8c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007de8c3(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  do {
    FUN_00878e09(in_EAX,*(undefined4 *)(unaff_EBP + -0x14));
    do {
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x10);
      iVar5 = *(int *)(unaff_EBP + -0x20);
      if ((iVar4 == *(int *)(iVar5 + 0x78)) ||
         ((*(int *)(iVar5 + 0x84) == 0 &&
          (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x4c) + 0x3270) + iVar4 * 4) != 0)))) {
        if (iVar4 == *(int *)(iVar5 + 0x74)) {
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x9c);
          piVar3 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (piVar3 == (int *)0x0) {
            FUN_00878dfb();
            piVar3 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar4 = *piVar3;
          *(int **)(unaff_EBP + -0x18) = piVar3;
          iVar4 = (**(code **)(iVar4 + 0x80))
                            (piVar3,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c),
                             *(undefined4 *)(unaff_EBP + -0x98));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar4 = FUN_00402bc3(unaff_EBP + -0xa0);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(unaff_EBX);
          piVar3 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (piVar3 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar3 = *(int **)(unaff_EBP + -0x2c);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
          iVar4 = *piVar3;
          *(int **)(unaff_EBP + -0x18) = piVar3;
          iVar4 = (**(code **)(iVar4 + 0x80))
                            (piVar3,*(undefined4 *)(unaff_EBP + -0x14),
                             *(int *)(unaff_EBP + -0x44) + 5,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0xc0),*(undefined4 *)(unaff_EBP + -0xbc),
                             *(undefined4 *)(unaff_EBP + -0xb8),*(undefined4 *)(unaff_EBP + -0xb4));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar4 = unaff_EBP + -0xc0;
        }
        else {
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x98);
          piVar3 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (piVar3 == (int *)0x0) {
            FUN_00878dfb();
            piVar3 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar4 = *piVar3;
          *(int **)(unaff_EBP + -0x18) = piVar3;
          iVar4 = (**(code **)(iVar4 + 0x80))
                            (piVar3,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x68));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(unaff_EBX);
          piVar3 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (piVar3 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar3 = *(int **)(unaff_EBP + -0x2c);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
          iVar4 = *piVar3;
          *(int **)(unaff_EBP + -0x18) = piVar3;
          iVar4 = (**(code **)(iVar4 + 0x80))
                            (piVar3,*(undefined4 *)(unaff_EBP + -0x14),
                             *(int *)(unaff_EBP + -0x44) + 5,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar4 = unaff_EBP + -0x60;
        }
      }
      else if (iVar4 == *(int *)(iVar5 + 0x74)) {
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x9c);
        piVar3 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x1c);
        }
        iVar4 = *piVar3;
        *(int **)(unaff_EBP + -0x18) = piVar3;
        iVar4 = (**(code **)(iVar4 + 0x80))
                          (piVar3,*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0xd0),*(undefined4 *)(unaff_EBP + -0xcc),
                           *(undefined4 *)(unaff_EBP + -200));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar4 = FUN_00402bc3(unaff_EBP + -0xd0);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(unaff_EBX);
        piVar3 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + -0x2c);
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
        iVar4 = *piVar3;
        *(int **)(unaff_EBP + -0x18) = piVar3;
        iVar4 = (**(code **)(iVar4 + 0x80))
                          (piVar3,*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x44) + 5
                           ,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x110),
                           *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108),
                           *(undefined4 *)(unaff_EBP + -0x104));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar4 = unaff_EBP + -0x110;
      }
      else {
        FUN_00403191();
        piVar3 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x2c);
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
        iVar4 = *piVar3;
        *(int **)(unaff_EBP + -0x18) = piVar3;
        iVar4 = (**(code **)(iVar4 + 0x80))
                          (piVar3,*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x44) + 5
                           ,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x90),
                           *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar4 = unaff_EBP + -0x90;
      }
      iVar4 = FUN_00402bc3(iVar4);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar4 = *(int *)(unaff_EBP + -0x20);
      if (*(int *)(iVar4 + 0x7c) <= *(int *)(unaff_EBP + -0x10)) {
        while (*(int *)(unaff_EBP + -0x10) < (*(int *)(iVar4 + 0x7c) / 6 + 1) * 6) {
          FUN_007ded43(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + -0x10));
          FUN_00403191(unaff_EBX);
          uVar2 = *(undefined4 *)(iVar4 + 0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_00470739(*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),uVar2,
                       unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        }
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x30) + -0xc);
        }
        FUN_004125e6();
        FUN_004125e6();
        FUN_004125e6();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      iVar4 = *(int *)(unaff_EBP + -0x20);
      puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x9d0);
      uVar2 = *puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00434e21(unaff_EBP + -0x30,uVar2,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x28) + -0xc);
      }
      FUN_00403191(unaff_EBX);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00403191(unaff_EBX);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x30),0xffffffff,0,0);
      FUN_0087a1b0();
      in_stack_0000001c = 0;
      in_stack_00000018 = unaff_EBP + -0xb0;
      in_stack_00000014 = unaff_EBP + -0xf0;
      in_stack_00000010 = 0xffffffff;
      FUN_00449713();
      FUN_00456ad5();
      *(undefined4 **)(unaff_EBP + -0x14) = &stack0x00000010;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      in_stack_00000018 = 0x7de7ea;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar2;
      in_stack_0000001c = 0x7de7f9;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        in_stack_0000001c = 0x7de80a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      in_stack_0000001c = 0x7de81a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        in_stack_0000001c = 0x7de825;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      in_stack_0000001c = 0x7de835;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        in_stack_0000001c = 0x7de840;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      in_stack_0000001c = 0x7de850;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        in_stack_0000001c = 0x7de85b;
        FUN_00878dfb();
      }
      in_stack_0000001c = unaff_EBP + -0x48;
      in_stack_00000018 = 0x7de869;
      FUN_007ded43();
      in_stack_0000001c = 0x7de875;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar4 + 0x94);
      piVar3 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (piVar3 == (int *)0x0) {
        in_stack_0000001c = 0x7de893;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x1c);
      }
      iVar4 = *piVar3;
      in_stack_00000010 = *(undefined4 *)(unaff_EBP + -0x18);
      in_stack_00000014 = *(undefined4 *)(unaff_EBP + -0x120);
      in_stack_00000018 = *(undefined4 *)(unaff_EBP + -0x11c);
      in_stack_0000001c = *(undefined4 *)(unaff_EBP + -0x118);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      in_EAX = (**(code **)(iVar4 + 0x80))();
    } while (-1 < in_EAX);
  } while( true );
}


