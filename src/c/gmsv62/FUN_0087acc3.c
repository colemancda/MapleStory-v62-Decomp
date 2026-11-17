/* FUN_0087acc3 - 0x0087acc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0087acc3(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = FUN_008823f2(0x133f,0xffff);
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = FUN_008822ba(param_1,(int)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))
                                      >> 0x20));
    if (iVar2 == 1) {
      FUN_008823f2(uVar1,0xffff);
      fVar3 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar2 == 2) {
      FUN_008823f2(uVar1,0xffff);
      fVar3 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar2 == 3) {
      fVar3 = (float10)FUN_00881a70();
    }
    else {
      fVar3 = (float10)FUN_00881b24(8,0x15,CONCAT26(param_2._2_2_,
                                                    CONCAT24((undefined2)param_2,param_1)),
                                    (double)CONCAT26(param_2._2_2_,
                                                     CONCAT24((undefined2)param_2,param_1)) +
                                    _DAT_008e8a78,uVar1);
    }
  }
  else {
    FUN_008823f2(uVar1,0xffff);
    fVar3 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar3;
}


