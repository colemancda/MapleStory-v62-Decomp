/* ZLZCloseFilter - 0x1000b830 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* void __cdecl ZLZCloseFilter(struct ZIStream *) */

void __cdecl ZLZCloseFilter(ZIStream *param_1)

{
                    /* 0xb830  1  ?ZLZCloseFilter@@YAXPAUZIStream@@@Z */
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1000c270((int *)param_1);
  if (param_1 != (ZIStream *)0x0) {
    (*(code *)**(undefined4 **)param_1)(1);
  }
  return;
}


