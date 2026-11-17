/* FUN_00615697 - 0x00615697 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00615697(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0061636f();
  iVar1 = FUN_00614192();
  if (0xe < iVar1) {
    FUN_004cd670();
    uVar2 = FUN_00449713();
    FUN_00448a17(uVar2);
    FUN_00615b8e(2,0);
  }
  return;
}


