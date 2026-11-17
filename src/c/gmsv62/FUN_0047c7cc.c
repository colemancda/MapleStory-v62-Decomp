/* FUN_0047c7cc - 0x0047c7cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c7cc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  char local_104 [256];
  
  uVar1 = FUN_0047ca3f(param_1);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_00978474;
  }
  FUN_0087b200(local_104,param_3);
  sVar2 = _strlen(local_104);
  (*DAT_0097b6bc)(uVar1,param_2,0,1,local_104,sVar2 + 1);
  return;
}


