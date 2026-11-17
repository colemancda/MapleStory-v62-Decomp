/* FUN_00883938 - 0x00883938 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00883938(undefined4 param_1,int param_2)

{
  FUN_0087b200(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    FUN_00883847(param_1,2,&DAT_00965a54,param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_00883847(param_1,2,&DAT_0096dffc,param_2 + 0x80);
  }
  return;
}


