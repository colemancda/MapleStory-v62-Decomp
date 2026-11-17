/* ptr_00868f0f - 0x00868f0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00868f0f(HWND param_1,LPRECT param_2)

{
  int unaff_ESI;
  
  *(uint *)(unaff_ESI + 0x6425ff00) = *(uint *)(unaff_ESI + 0x6425ff00) | 0xffffff83;
                    /* WARNING: Could not recover jumptable at 0x00868f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetWindowRect(param_1,param_2);
  return;
}


