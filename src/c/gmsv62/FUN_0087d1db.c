/* FUN_0087d1db - 0x0087d1db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087d1db(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  *param_1 = sVar1;
  while( true ) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (sVar1 == 0) break;
    sVar1 = *param_2;
    *param_1 = sVar1;
  }
  return;
}


