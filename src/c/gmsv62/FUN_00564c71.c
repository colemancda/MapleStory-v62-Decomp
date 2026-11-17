/* FUN_00564c71 - 0x00564c71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00564c71(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1e0;
  undefined1 auStack_1dc [4];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x13c);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar1 == 0) {
    if (DAT_0097942c != 0) {
      iStack_1c8 = 0x56532d;
      FUN_00815de9();
      if (DAT_0097942c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56533e;
        (*(code *)**(undefined4 **)(DAT_0097942c + 8))();
      }
    }
    if (DAT_00979428 != 0) {
      iStack_1c8 = 0x56534d;
      FUN_00815de9();
      if (DAT_00979428 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56535e;
        (*(code *)**(undefined4 **)(DAT_00979428 + 8))();
      }
    }
    if (DAT_00979424 != 0) {
      iStack_1c8 = 0x56536d;
      FUN_00815de9();
      if (DAT_00979424 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56537e;
        (*(code *)**(undefined4 **)(DAT_00979424 + 8))();
      }
    }
    if (DAT_0097941c != 0) {
      iStack_1c8 = 0x56538d;
      FUN_00815de9();
      if (DAT_0097941c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56539e;
        (*(code *)**(undefined4 **)(DAT_0097941c + 8))();
      }
    }
    if (DAT_00979420 != 0) {
      iStack_1c8 = 0x5653ad;
      FUN_00815de9();
      if (DAT_00979420 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5653be;
        (*(code *)**(undefined4 **)(DAT_00979420 + 8))();
      }
    }
    if (DAT_00979414 != 0) {
      iStack_1c8 = 0x5653cd;
      FUN_00815de9();
      if (DAT_00979414 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5653de;
        (*(code *)**(undefined4 **)(DAT_00979414 + 8))();
      }
    }
    if (DAT_00979418 != 0) {
      iStack_1c8 = 0x5653ed;
      FUN_00815de9();
      if (DAT_00979418 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5653fe;
        (*(code *)**(undefined4 **)(DAT_00979418 + 8))();
      }
    }
    if (DAT_00979410 != 0) {
      iStack_1c8 = 0x56540d;
      FUN_00815de9();
      if (DAT_00979410 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56541e;
        (*(code *)**(undefined4 **)(DAT_00979410 + 8))();
      }
    }
    if (DAT_0097940c != 0) {
      iStack_1c8 = 0x56542d;
      FUN_00815de9();
      if (DAT_0097940c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56543e;
        (*(code *)**(undefined4 **)(DAT_0097940c + 8))();
      }
    }
    iStack_1c8 = 0;
    iStack_1cc = 0x565446;
    FUN_00569976();
    iStack_1c8 = 0x565451;
    FUN_0056a7a6();
    goto LAB_00565451;
  }
  if (iVar1 == 1) {
    if (DAT_00979430 != 0) {
      iStack_1c8 = 0x5651ff;
      FUN_00815de9();
      if (DAT_00979430 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x565210;
        (*(code *)**(undefined4 **)(DAT_00979430 + 8))();
      }
    }
    if (DAT_00979424 != 0) {
      iStack_1c8 = 0x56521f;
      FUN_00815de9();
      if (DAT_00979424 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x565230;
        (*(code *)**(undefined4 **)(DAT_00979424 + 8))();
      }
    }
    if (DAT_0097941c != 0) {
      iStack_1c8 = 0x56523f;
      FUN_00815de9();
      if (DAT_0097941c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x565250;
        (*(code *)**(undefined4 **)(DAT_0097941c + 8))();
      }
    }
    if (DAT_00979420 != 0) {
      iStack_1c8 = 0x56525f;
      FUN_00815de9();
      if (DAT_00979420 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x565270;
        (*(code *)**(undefined4 **)(DAT_00979420 + 8))();
      }
    }
    if (DAT_00979414 != 0) {
      iStack_1c8 = 0x56527f;
      FUN_00815de9();
      if (DAT_00979414 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x565290;
        (*(code *)**(undefined4 **)(DAT_00979414 + 8))();
      }
    }
    if (DAT_00979418 != 0) {
      iStack_1c8 = 0x56529f;
      FUN_00815de9();
      if (DAT_00979418 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5652b0;
        (*(code *)**(undefined4 **)(DAT_00979418 + 8))();
      }
    }
    if (DAT_00979410 != 0) {
      iStack_1c8 = 0x5652bf;
      FUN_00815de9();
      if (DAT_00979410 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5652d0;
        (*(code *)**(undefined4 **)(DAT_00979410 + 8))();
      }
    }
    if (DAT_0097940c != 0) {
      iStack_1c8 = 0x5652df;
      FUN_00815de9();
      if (DAT_0097940c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5652f0;
        (*(code *)**(undefined4 **)(DAT_0097940c + 8))();
      }
    }
    iStack_1c8 = 0;
    iStack_1cc = 0x5652f8;
    FUN_00569976();
    iStack_1c8 = 0xe0;
    iStack_1cc = 0x565307;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_1c8 = 1;
    if (iVar1 != 0) goto LAB_00564ddf;
LAB_00564de9:
    iStack_1c8 = 0;
LAB_00564deb:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1cc = 0x564dfb;
    FUN_0056a6d5();
    iVar1 = extraout_ECX;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        iStack_1c8 = 0x200;
        iStack_1cc = 0x564e2b;
        iVar1 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x14) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        else {
          iStack_1c8 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_1cc = 0x564e43;
          uVar2 = FUN_0057fa8a();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
        }
        iVar1 = DAT_00979430;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (iVar1 != 0) {
          iStack_1c8 = 0x564e62;
          FUN_00815de9();
          if (DAT_00979430 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564e73;
            (*(code *)**(undefined4 **)(DAT_00979430 + 8))();
          }
        }
        if (DAT_0097942c != 0) {
          iStack_1c8 = 0x564e82;
          FUN_00815de9();
          if (DAT_0097942c != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564e93;
            (*(code *)**(undefined4 **)(DAT_0097942c + 8))();
          }
        }
        if (DAT_00979428 != 0) {
          iStack_1c8 = 0x564ea2;
          FUN_00815de9();
          if (DAT_00979428 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564eb3;
            (*(code *)**(undefined4 **)(DAT_00979428 + 8))();
          }
        }
        if (DAT_00979424 != 0) {
          iStack_1c8 = 0x564ec2;
          FUN_00815de9();
          if (DAT_00979424 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564ed3;
            (*(code *)**(undefined4 **)(DAT_00979424 + 8))();
          }
        }
        if (DAT_0097941c != 0) {
          iStack_1c8 = 0x564ee2;
          FUN_00815de9();
          if (DAT_0097941c != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564ef3;
            (*(code *)**(undefined4 **)(DAT_0097941c + 8))();
          }
        }
        if (DAT_00979420 != 0) {
          iStack_1c8 = 0x564f02;
          FUN_00815de9();
          if (DAT_00979420 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564f13;
            (*(code *)**(undefined4 **)(DAT_00979420 + 8))();
          }
        }
        if (DAT_00979414 != 0) {
          iStack_1c8 = 0x564f22;
          FUN_00815de9();
          if (DAT_00979414 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564f33;
            (*(code *)**(undefined4 **)(DAT_00979414 + 8))();
          }
        }
        if (DAT_00979418 != 0) {
          iStack_1c8 = 0x564f42;
          FUN_00815de9();
          if (DAT_00979418 != 0) {
            iStack_1c8 = 1;
            iStack_1cc = 0x564f53;
            (*(code *)**(undefined4 **)(DAT_00979418 + 8))();
          }
        }
        iVar1 = *(int *)(unaff_EBP + -0x10);
        iStack_1c8 = *(undefined4 *)(iVar1 + 0x1a0);
        iStack_1cc = 0x564f63;
        FUN_00569976();
        iStack_1c8 = 0xe0;
        iStack_1cc = 0x564f70;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        if (iVar3 == 0) {
          iStack_1c8 = 0;
        }
        else {
          iStack_1c8 = 3;
          uStack_1d0 = 0x564f88;
          iStack_1cc = iVar1;
          iStack_1c8 = FUN_00578ead();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_1cc = 0x564f9c;
        FUN_0056a6d5();
        if (*(int *)(iVar1 + 0x1a8) == 0) {
          iStack_1c8 = 0xe0;
          iStack_1cc = 0x564fad;
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar3;
          *(undefined4 *)(unaff_EBP + -4) = 5;
          if (iVar3 == 0) {
            iStack_1c8 = 0;
          }
          else {
            iStack_1c8 = 0xffffffff;
            uStack_1d0 = 0x564fc5;
            iStack_1cc = iVar1;
            iStack_1c8 = FUN_00578ead();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_1cc = 0x564fd9;
          FUN_0056a6d5();
        }
        iStack_1c8 = 0x564fe4;
        FUN_0044590d();
        *(char *)(unaff_EBP + -0x1b8) = (char)*(undefined4 *)(DAT_00978368 + 0x202c);
        iStack_1c8 = unaff_EBP + -0x1c4;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        iStack_1cc = 0x56500b;
        FUN_00580c83();
        iStack_1c8 = 0x565018;
        FUN_004497c2();
        iStack_1c8 = 0;
        iStack_1cc = 100;
        uStack_1d0 = 0xfffff917;
        uStack_1d4 = 0x16;
        uStack_1d8 = 0;
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_1dc;
        uStack_1e0 = 0;
        FUN_00424e0a();
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_1e0;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00424dd7(0);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uVar2 = FUN_0044972c(2,0);
        iVar1 = unaff_EBP + -0x1c4;
        FUN_00449780(iVar1,uVar2);
        FUN_0043f082(iVar1,uVar2);
        goto LAB_00565451;
      }
      if (iVar1 != 4) goto LAB_00565451;
      if (DAT_0097942c != 0) {
        iStack_1c8 = 0x564cc7;
        FUN_00815de9();
        if (DAT_0097942c != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564cd8;
          (*(code *)**(undefined4 **)(DAT_0097942c + 8))();
        }
      }
      if (DAT_00979428 != 0) {
        iStack_1c8 = 0x564ce7;
        FUN_00815de9();
        if (DAT_00979428 != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564cf8;
          (*(code *)**(undefined4 **)(DAT_00979428 + 8))();
        }
      }
      if (DAT_00979424 != 0) {
        iStack_1c8 = 0x564d07;
        FUN_00815de9();
        if (DAT_00979424 != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564d18;
          (*(code *)**(undefined4 **)(DAT_00979424 + 8))();
        }
      }
      if (DAT_00979430 != 0) {
        iStack_1c8 = 0x564d27;
        FUN_00815de9();
        if (DAT_00979430 != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564d38;
          (*(code *)**(undefined4 **)(DAT_00979430 + 8))();
        }
      }
      if (DAT_0097941c != 0) {
        iStack_1c8 = 0x564d47;
        FUN_00815de9();
        if (DAT_0097941c != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564d58;
          (*(code *)**(undefined4 **)(DAT_0097941c + 8))();
        }
      }
      if (DAT_00979420 != 0) {
        iStack_1c8 = 0x564d67;
        FUN_00815de9();
        if (DAT_00979420 != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564d78;
          (*(code *)**(undefined4 **)(DAT_00979420 + 8))();
        }
      }
      if (DAT_00979410 != 0) {
        iStack_1c8 = 0x564d87;
        FUN_00815de9();
        if (DAT_00979410 != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564d98;
          (*(code *)**(undefined4 **)(DAT_00979410 + 8))();
        }
      }
      if (DAT_0097940c != 0) {
        iStack_1c8 = 0x564da7;
        FUN_00815de9();
        if (DAT_0097940c != 0) {
          iStack_1c8 = 1;
          iStack_1cc = 0x564db8;
          (*(code *)**(undefined4 **)(DAT_0097940c + 8))();
        }
      }
      iStack_1c8 = 0;
      iStack_1cc = 0x564dc0;
      FUN_00569976();
      iStack_1c8 = 0xe0;
      iStack_1cc = 0x564dcf;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 9;
      if (iVar1 == 0) goto LAB_00564de9;
      iStack_1c8 = 4;
LAB_00564ddf:
      uStack_1d0 = 0x564de7;
      iStack_1c8 = FUN_00578ead();
      goto LAB_00564deb;
    }
    if (DAT_00979430 != 0) {
      iStack_1c8 = 0x56507c;
      FUN_00815de9();
      if (DAT_00979430 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56508d;
        (*(code *)**(undefined4 **)(DAT_00979430 + 8))();
      }
    }
    if (DAT_0097942c != 0) {
      iStack_1c8 = 0x56509c;
      FUN_00815de9();
      if (DAT_0097942c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5650ad;
        (*(code *)**(undefined4 **)(DAT_0097942c + 8))();
      }
    }
    if (DAT_00979428 != 0) {
      iStack_1c8 = 0x5650bc;
      FUN_00815de9();
      if (DAT_00979428 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5650cd;
        (*(code *)**(undefined4 **)(DAT_00979428 + 8))();
      }
    }
    if (DAT_00979410 != 0) {
      iStack_1c8 = 0x5650dc;
      FUN_00815de9();
      if (DAT_00979410 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x5650ed;
        (*(code *)**(undefined4 **)(DAT_00979410 + 8))();
      }
    }
    if (DAT_0097940c != 0) {
      iStack_1c8 = 0x5650fc;
      FUN_00815de9();
      if (DAT_0097940c != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56510d;
        (*(code *)**(undefined4 **)(DAT_0097940c + 8))();
      }
    }
    if (DAT_00979414 != 0) {
      iStack_1c8 = 0x56511c;
      FUN_00815de9();
      if (DAT_00979414 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56512d;
        (*(code *)**(undefined4 **)(DAT_00979414 + 8))();
      }
    }
    if (DAT_00979418 != 0) {
      iStack_1c8 = 0x56513c;
      FUN_00815de9();
      if (DAT_00979418 != 0) {
        iStack_1c8 = 1;
        iStack_1cc = 0x56514d;
        (*(code *)**(undefined4 **)(DAT_00979418 + 8))();
      }
    }
    iStack_1c8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1a0);
    iStack_1cc = 0x56515b;
    FUN_00569976();
    iStack_1c8 = 0xe0;
    iStack_1cc = 0x56516d;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      iStack_1c8 = 0;
    }
    else {
      iStack_1c8 = 2;
      iStack_1cc = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_1d0 = 0x565185;
      iStack_1c8 = FUN_00578ead();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1cc = 0x56519c;
    FUN_0056a6d5();
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x1a8) == 0) {
      iStack_1c8 = 0xe0;
      iStack_1cc = 0x5651b0;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        iStack_1c8 = 0;
      }
      else {
        iStack_1c8 = 0xffffffff;
        iStack_1cc = *(undefined4 *)(unaff_EBP + -0x10);
        uStack_1d0 = 0x5651c6;
        iStack_1c8 = FUN_00578ead();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_1cc = 0x5651dd;
      FUN_0056a6d5();
    }
    iVar1 = *(int *)(unaff_EBP + -0x10);
  }
  if (*(int *)(iVar1 + 400) != 0) {
    iStack_1c8 = 0;
    iStack_1cc = 0x564e12;
    FUN_00449941();
    *(undefined4 *)(iVar1 + 400) = 0;
  }
LAB_00565451:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


