/* FUN_0067076b - 0x0067076b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0067076b(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_0097b704)();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(short *)(param_1 + 0x10) = (short)((ulonglong)param_2 / 1000);
  return;
}


