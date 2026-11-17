/* FUN_00881bbc - 0x00881bbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_00881bbc(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,undefined4 param_6)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00881f14(param_1,&param_5,param_6);
  if (iVar1 == 0) {
    FUN_00881c61();
  }
  iVar1 = FUN_00882200(param_1);
  if ((DAT_00972de0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_0088212b(iVar1,param_2,param_3,param_4,param_5,param_6);
    return fVar2;
  }
  FUN_008821b3(iVar1);
  FUN_008823f2();
  return (float10)param_5;
}


