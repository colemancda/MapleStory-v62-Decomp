/* FUN_50c02ab6 - 0x50c02ab6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c02ab6(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_50c211e8)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_50c02783(&DAT_50c21310,(undefined4 *)param_1[1]);
  }
  return;
}


