/* FUN_007f1845 - 0x007f1845 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007f1845(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  int local_a4 [12];
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined1 local_5c [16];
  undefined4 local_4c;
  int local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c;
  double local_14;
  double local_c;
  
  param_1[0x5c] = param_1[0x5b];
  if (param_1[0x57] != 0) {
    FUN_007f1fec();
  }
  if (param_1[0x5e] != 0) {
    FUN_007f200a();
  }
  if (param_1[0x58] != 0) {
    FUN_007f1ac6();
  }
  if (param_1[0x5a] != 0) {
    FUN_007f1fc4();
  }
  if (param_1[0x44] == 0) {
    piVar3 = param_1 + 8;
    piVar4 = local_a4;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    FUN_007f2a1c(param_2);
    (**(code **)(*param_1 + 0x18))();
    iVar1 = (**(code **)(*param_1 + 0xc))(local_a4,&param_2,1);
    if ((iVar1 != 0) && (0 < param_2)) {
      local_c = (double)param_2 * _DAT_008e8a90;
      if (param_1[0x44] == 0) {
        (**(code **)(*param_1 + 0xc))(local_a4,&param_2,0);
      }
      else {
        iVar1 = param_1[0x3c];
        piVar3 = param_1 + 0x38;
        piVar4 = local_44;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        fVar5 = (float10)FUN_004f1993(param_1 + 0x38,iVar1);
        local_14 = (double)fVar5;
        fVar5 = (float10)FUN_004f1993(local_2c,local_1c);
        iVar1 = FUN_004f1a11((double)(fVar5 * (float10)local_c + (float10)local_14));
        param_1[0x3c] = iVar1;
        (**(code **)(*param_1 + 8))(local_44,&param_2);
      }
    }
    (**(code **)(*param_1 + 0x1c))();
  }
  else {
    piVar3 = param_1 + 0x38;
    piVar4 = local_44;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    FUN_007f21d2(param_2);
    iVar1 = (**(code **)(*param_1 + 8))(local_44,&param_2);
    if ((iVar1 != 0) && (0 < param_2)) {
      local_14 = (double)param_2 * _DAT_008e8a90;
      if (param_1[0x44] == 0) {
        iVar1 = param_1[0xc];
        piVar3 = param_1 + 8;
        piVar4 = local_a4;
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        fVar5 = (float10)FUN_004f1993(param_1 + 8,iVar1);
        local_c = (double)fVar5;
        fVar5 = (float10)FUN_004f1993(local_74,local_64);
        iVar1 = FUN_004f1a11((double)(fVar5 * (float10)local_14 + (float10)local_c));
        param_1[0xc] = iVar1;
        fVar5 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
        local_c = (double)fVar5;
        fVar5 = (float10)FUN_004f1993(local_5c,local_4c);
        iVar1 = FUN_004f1a11((double)(fVar5 * (float10)local_14 + (float10)local_c));
        param_1[0x12] = iVar1;
        (**(code **)(*param_1 + 0xc))(local_a4,&param_2,0);
      }
      else {
        iVar1 = param_1[0x3c];
        piVar3 = param_1 + 0x38;
        piVar4 = local_44;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        fVar5 = (float10)FUN_004f1993(param_1 + 0x38,iVar1);
        local_c = (double)fVar5;
        fVar5 = (float10)FUN_004f1993(local_2c,local_1c);
        iVar1 = FUN_004f1a11((double)(fVar5 * (float10)local_14 + (float10)local_c));
        param_1[0x3c] = iVar1;
        (**(code **)(*param_1 + 8))(local_44,&param_2);
      }
    }
  }
  (**(code **)(*param_1 + 0x14))(param_2);
  return 1;
}


