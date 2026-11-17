/* FUN_00881b24 - 0x00881b24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_00881b24(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00881f14(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_00881c61();
  }
  iVar1 = FUN_00882200(param_1);
  if ((DAT_00972de0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_0088212b(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_008821b3(iVar1);
  FUN_008823f2();
  return (float10)param_4;
}


