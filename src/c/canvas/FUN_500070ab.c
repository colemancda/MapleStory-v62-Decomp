/* FUN_500070ab - 0x500070ab in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __fastcall FUN_500070ab(void *param_1)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_500070d7(param_1,'\0');
  if (psVar1 != (short *)0x0) {
    if (*psVar1 == 8) {
      return *(undefined4 *)(psVar1 + 4);
    }
    if ((*psVar1 == 0x4008) && (*(undefined4 **)(psVar1 + 4) != (undefined4 *)0x0)) {
      return **(undefined4 **)(psVar1 + 4);
    }
  }
  return 0;
}


