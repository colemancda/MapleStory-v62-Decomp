/* FUN_0065ad6b - 0x0065ad6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065ad6b(void)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_34;
  short *psStack_30;
  int *piStack_2c;
  
  FUN_00879bb8();
  piStack_2c = *(int **)(unaff_EBP + 8);
  if (((int *)*piStack_2c == (int *)0x0) || (iVar1 = *(int *)*piStack_2c, iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + -4) >> 1;
  }
  if (uVar2 == 0) {
    if (((int *)**(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar1 = *(int *)**(int **)(unaff_EBP + 0xc), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar1 + -4) >> 1;
    }
    if (uVar2 != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0x22000006;
      piStack_2c = (int *)&DAT_008f7260;
      psStack_30 = (short *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
      uStack_34 = 0x65add2;
      __CxxThrowException_8();
    }
  }
  psStack_30 = (short *)0x65addb;
  FUN_00402f41();
  piStack_2c = *(int **)(unaff_EBP + 0xc);
  psStack_30 = (short *)0x65ade6;
  FUN_00402f41();
  piVar5 = *(int **)(extraout_ECX + 0x30);
  if (piVar5 != *(int **)(unaff_EBP + 0x10)) {
    *(int **)(extraout_ECX + 0x30) = *(int **)(unaff_EBP + 0x10);
    piStack_2c = (int *)0x65adfa;
    FUN_004125f3();
    if (piVar5 != (int *)0x0) {
      psStack_30 = (short *)0x65ae04;
      piStack_2c = piVar5;
      (**(code **)(*piVar5 + 8))();
    }
  }
  piStack_2c = (int *)(unaff_EBP + -0x18);
  psStack_30 = (short *)0x65ae0d;
  FUN_0065ad0b();
  psStack_30 = (short *)0x2;
  uStack_34 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(extraout_ECX + 0x18) = 0x80000001;
  psVar3 = (short *)FUN_00402df5();
  piStack_2c = (int *)0x0;
  uStack_34 = 0x65ae34;
  psStack_30 = psVar3;
  FUN_00402ee6();
  piStack_2c = extraout_ECX_00;
  if ((undefined4 *)**(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    psVar4 = (short *)0x0;
  }
  else {
    psVar4 = *(short **)**(undefined4 **)(unaff_EBP + 8);
  }
  while( true ) {
    if (*psVar4 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_2c = (int *)0x65aeea;
      FUN_00402fa6();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      piStack_2c = (int *)(unaff_EBP + 8);
      psStack_30 = (short *)0x65aefc;
      FUN_00402f41();
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_2c = (int *)0x65af08;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
      piStack_2c = (int *)0x65af16;
      uVar6 = FUN_0040e48b();
      *(undefined4 *)(extraout_ECX + 0x1c) = uVar6;
      piStack_2c = (int *)0x65af20;
      uVar6 = FUN_0040e53d();
      *(undefined4 *)(extraout_ECX + 0x20) = uVar6;
      piStack_2c = (int *)0x65af2a;
      uVar6 = FUN_0040eea9();
      *(undefined4 *)(extraout_ECX + 0x28) = uVar6;
      piStack_2c = (int *)0x65af34;
      uVar6 = FUN_0040eed0();
      *(undefined4 *)(extraout_ECX + 0x2c) = uVar6;
      piStack_2c = (int *)(unaff_EBP + -0x14);
      psStack_30 = (short *)0x65af42;
      FUN_00404e7f();
      psStack_30 = *(short **)(unaff_EBP + 0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_34;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_2c = (int *)(extraout_ECX + 0x14);
      FUN_00424dbc(unaff_EBP + -0x14);
      uVar6 = FUN_0065aaa6();
      *(undefined4 *)(extraout_ECX + 0x24) = uVar6;
      piStack_2c = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_2c != (int *)0x0) {
        psStack_30 = (short *)0x65af75;
        (**(code **)(*piStack_2c + 8))();
      }
      piStack_2c = *(int **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_2c != (int *)0x0) {
        psStack_30 = (short *)0x65af86;
        (**(code **)(*piStack_2c + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *psVar3 = *psVar4;
    psVar3[1] = psVar4[1];
    psStack_30 = (short *)(unaff_EBP + -0x10);
    *(int ***)(unaff_EBP + 8) = &piStack_2c;
    uStack_34 = 0x65ae6b;
    FUN_0040810c();
    psStack_30 = (short *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_34 = 0x65ae7b;
    FUN_0040263d();
    uStack_34 = 0x65ae82;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(short *)(unaff_EBP + -0x28) == 0) break;
    piStack_2c = (int *)0x0;
    psStack_30 = (short *)0x3;
    uStack_34 = 0x65ae99;
    FUN_00403271();
    if (*(int *)(extraout_ECX + 0x18) < *(int *)(unaff_EBP + -0x20)) {
      *(int *)(extraout_ECX + 0x18) = *(int *)(unaff_EBP + -0x20);
    }
    piStack_2c = (int *)(unaff_EBP + -0x28);
    psVar4 = psVar4 + 2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    psStack_30 = (short *)0x65aeb4;
    piVar5 = (int *)FUN_00402bc3();
    if ((int)piVar5 < 0) {
      psStack_30 = (short *)0x65aebf;
      piStack_2c = piVar5;
      FUN_00878dfb();
      piStack_2c = extraout_ECX_01;
    }
  }
  *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
  *(undefined4 *)(unaff_EBP + 0xc) = 0x22000006;
  piStack_2c = (int *)&DAT_008f7260;
  psStack_30 = (short *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
                    /* WARNING: Subroutine does not return */
  uStack_34 = 0x65aede;
  __CxxThrowException_8();
}


