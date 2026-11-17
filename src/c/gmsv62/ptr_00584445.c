/* ptr_00584445 - 0x00584445 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00584445(void)

{
  int *piVar1;
  int iVar2;
  code *unaff_EBX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined1 *puStack_40;
  
code_r0x00584445:
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00449749();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffe8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00449749();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffe0;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  (*unaff_EBX)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00449749();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
LAB_00584d43:
  do {
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    do {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      iVar2 = *(int *)(unaff_EBP + -0x28);
      if (iVar2 == 0) {
LAB_00584e33:
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        iVar2 = **(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x5e;
        if (iVar2 == 0) {
          FUN_00878dfb();
        }
        piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
        puStack_40 = *(undefined1 **)(unaff_EBP + -0x3c);
        iVar2 = (**(code **)(*piVar1 + 0x90))(piVar1,0xfffffe7f,0xb1);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_00584ee4:
        iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        piVar1 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00445a30();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      if (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + -0x20)) {
        if ((iVar2 != 0) && (*(int *)(iVar2 + -4) == 1)) {
          (*unaff_EBX)();
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x5b;
          (*unaff_EBX)();
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            FUN_00878dfb();
          }
          iVar2 = **(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x5c;
          if (iVar2 == 0) {
            FUN_00878dfb();
          }
          piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
          puStack_40 = *(undefined1 **)(unaff_EBP + -0x3c);
          iVar2 = (**(code **)(*piVar1 + 0x90))(piVar1,0xfffffe7f,0xbe);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x5b;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          goto LAB_00584ee4;
        }
        goto LAB_00584e33;
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00449749();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
      FUN_00679e4e();
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x20) * 0x46 + *(int *)(unaff_EBP + -0x5c)
      ;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004115d9();
      FUN_00448e3a();
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      FUN_00414edd();
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x20) * 4);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar2 == 0) {
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x50;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x50;
        if (*(int **)(unaff_EBP + -0x98) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x98) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffc8;
        puStack_40 = &stack0xffffffc8;
        FUN_00679e4e();
        puStack_40 = (undefined1 *)0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        if (*(int **)(unaff_EBP + -0xa0) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0xa0) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        puStack_40 = (undefined1 *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        if (*(int **)(unaff_EBP + -0xa8) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
      if (iVar2 == 1) {
        uVar3 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uVar3 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00449749();
        FUN_00449713();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (*(int **)(unaff_EBP + -0x90) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
      if (iVar2 == 2) {
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffff0;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int **)(unaff_EBP + -0x9c) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
        }
        goto code_r0x00584445;
      }
      if (iVar2 == 3) {
        uVar3 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        uVar3 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_00449749();
        FUN_00449713();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        if (*(int **)(unaff_EBP + -0x94) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x94) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffc8;
        puStack_40 = &stack0xffffffc8;
        FUN_00679e4e();
        puStack_40 = (undefined1 *)0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        (*unaff_EBX)();
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        puStack_40 = (undefined1 *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        FUN_00449749();
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_40;
        FUN_00679e4e(&puStack_40,0x108a);
        iVar2 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
        uVar3 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        FUN_004115d9(0xf,iVar2);
        FUN_00448e3a(uVar3,iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int **)(unaff_EBP + -0xb4) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0xb4) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        (*unaff_EBX)();
        puStack_40 = (undefined1 *)0x5842bf;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        (*unaff_EBX)();
        puStack_40 = (undefined1 *)(unaff_EBP + -0x198);
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          puStack_40 = (undefined1 *)0x5842f1;
          FUN_00878dfb();
        }
        puStack_40 = (undefined1 *)(unaff_EBP + -0x198);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        FUN_007d4a9a(unaff_EBP + -0x7c,1);
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_00449749();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
    } while (iVar2 != 4);
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_00449749();
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (*(int **)(unaff_EBP + -0x74) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x74) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_00449749();
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffc8;
    puStack_40 = &stack0xffffffc8;
    FUN_00679e4e();
    puStack_40 = (undefined1 *)0xf;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (*(int **)(unaff_EBP + -0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    (*unaff_EBX)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    puStack_40 = (undefined1 *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_40;
    FUN_00679e4e(&puStack_40,0x108f);
    iVar2 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
    uVar3 = 0xf;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_004115d9(0xf,iVar2);
    FUN_00448e3a(uVar3,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    (*unaff_EBX)();
    puStack_40 = (undefined1 *)0x583e91;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    (*unaff_EBX)();
    puStack_40 = (undefined1 *)(unaff_EBP + -0x118);
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      puStack_40 = (undefined1 *)0x583ec3;
      FUN_00878dfb();
    }
    puStack_40 = (undefined1 *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    FUN_007d4a9a(unaff_EBP + -0xac,1);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_00449749();
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd8;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    if (*(int **)(unaff_EBP + -0xac) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0xac) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
  } while( true );
}


