/* ptr_0077d2e8 - 0x0077d2e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0077d2e8(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + 8) = register0x00000010;
  FUN_004125f3();
  FUN_0076d211();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x584) + 0x38);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(int *)(unaff_EBP + -0x28) = iVar2;
  iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x588);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar6 == 0) {
    iVar6 = *(int *)(unaff_EBP + 8) + iVar2 * -0x21;
    *(int *)(unaff_EBP + -0x1c) = iVar2 * 0x21;
    *(int *)(unaff_EBP + 8) = iVar6;
    if (0x101 < iVar6) {
      *(undefined4 *)(unaff_EBP + 8) = 0x102;
    }
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x24) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x84))(piVar3,6,0x35,*(undefined4 *)(unaff_EBP + -0x10),0xff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iVar2 = FUN_00402bc3(unaff_EBP + -0xac);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + 8) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x84))
                      (piVar3,0,0x13b,*(undefined4 *)(unaff_EBP + -0x20),0xff,0x138,0x10,0,0,0x138,
                       0x10,*(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
  }
  else {
    if (iVar6 == 1) {
      iVar6 = *(int *)(unaff_EBP + 8) + iVar2 * -0x21;
      *(int *)(unaff_EBP + -0x1c) = iVar2 * 0x21;
      *(int *)(unaff_EBP + 8) = iVar6;
      if (0x115 < iVar6) {
        *(undefined4 *)(unaff_EBP + 8) = 0x116;
      }
      FUN_00403191(&DAT_00980690);
      piVar3 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x18);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x24) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x84))(piVar3,6,0x35,*(undefined4 *)(unaff_EBP + -0x10),0xff);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar2 = unaff_EBP + -0x4c;
    }
    else {
      if (iVar6 == 2) {
        FUN_00403191(&DAT_00980690);
        piVar3 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x24) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x84))
                          (piVar3,5,0x37,*(undefined4 *)(unaff_EBP + -0x20),0xff,0x138,0x32,0,0,
                           0x138,0x32,*(undefined4 *)(unaff_EBP + -0x7c),
                           *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                           *(undefined4 *)(unaff_EBP + -0x70));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x7c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x28) * -0x21;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) * 0x21;
        *(int *)(unaff_EBP + 8) = iVar2;
        if (0xbf < iVar2) {
          *(undefined4 *)(unaff_EBP + 8) = 0xc0;
        }
        FUN_00403191(&DAT_00980690);
        piVar3 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x24) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x84))(piVar3,6,0x71,*(undefined4 *)(unaff_EBP + -0x10),0xff);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = *(int *)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x1c);
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 8);
        iVar6 = *(int *)(iVar2 + 0x824);
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(undefined4 *)(unaff_EBP + -0x30) = unaff_EBX;
        iVar6 = FUN_0077ed03(1,iVar6 + 100,unaff_EBP + -0x38,*(undefined4 *)(unaff_EBP + -0x28));
        if (iVar6 == 0) {
          FUN_0077efbd(0);
          FUN_0077efbd(2);
          FUN_0077efbd(3);
        }
        iVar2 = FUN_0077ed03(0,*(int *)(iVar2 + 0x824) + 0xe0,unaff_EBP + -0x38,
                             *(undefined4 *)(unaff_EBP + -0x28));
        if (iVar2 == 0) {
          FUN_0077efbd(1);
          FUN_0077efbd(4);
          FUN_0077efbd(5);
        }
        goto LAB_0077da86;
      }
      if (iVar6 == 3) {
        FUN_00403191(&DAT_00980690);
        piVar3 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x1c) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x84))
                          (piVar3,5,0x37,*(undefined4 *)(unaff_EBP + -0x20),0xff,0x138,0x32,0,0,
                           0x138,0x32,*(undefined4 *)(unaff_EBP + -0xbc),
                           *(undefined4 *)(unaff_EBP + -0xb8),*(undefined4 *)(unaff_EBP + -0xb4),
                           *(undefined4 *)(unaff_EBP + -0xb0));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar2 = FUN_00402bc3(unaff_EBP + -0xbc);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x28) * -0x21;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) * 0x21;
        *(int *)(unaff_EBP + 8) = iVar2;
        if (0xbf < iVar2) {
          *(undefined4 *)(unaff_EBP + 8) = 0xc0;
        }
        FUN_00403191(&DAT_00980690);
        piVar3 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x24) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x84))(piVar3,6,0x71,*(undefined4 *)(unaff_EBP + -0x10),0xff);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x9c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = DAT_00978368;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x30) = unaff_EBX;
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 8);
        if (*(int *)(iVar2 + 0x2cd2) != 0) {
          iVar6 = 0;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined4 *)(unaff_EBP + 8) = 6;
          while( true ) {
            iVar5 = *(int *)(iVar2 + 0x2cf8);
            iVar4 = 0;
            if (iVar5 != 0) {
              iVar4 = *(int *)(iVar5 + -4);
            }
            if (iVar4 + 1 <= iVar6) break;
            iVar5 = FUN_0077f00e(iVar6,*(int *)(*(int *)(unaff_EBP + -0x14) + 0x828) + 0x60 +
                                       *(int *)(unaff_EBP + -0x1c),unaff_EBP + -0x38,
                                 *(undefined4 *)(unaff_EBP + -0x28));
            if (iVar5 == 0) {
              FUN_0077f2b3(iVar6);
              FUN_0077f2b3(*(int *)(unaff_EBP + 8) + -1);
              FUN_0077f2b3(*(undefined4 *)(unaff_EBP + 8));
            }
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x80;
            iVar6 = iVar6 + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 2;
          }
        }
        goto LAB_0077da86;
      }
      if (iVar6 != 4) goto LAB_0077da86;
      FUN_00403191(&DAT_00980690);
      piVar3 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x18);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x1c) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x84))(piVar3,6,0x35,*(undefined4 *)(unaff_EBP + -0x10),0xff);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar2 = unaff_EBP + -0x8c;
    }
    iVar2 = FUN_00402bc3(iVar2);
  }
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
LAB_0077da86:
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


