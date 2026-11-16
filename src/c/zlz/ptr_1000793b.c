/* ptr_1000793b - 0x1000793b in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 ptr_1000793b(void)

{
  int unaff_ESI;
  
  **(undefined4 **)(unaff_ESI + 0x1c) = 0xd;
  *(char **)(unaff_ESI + 0x18) = s_need_dictionary_10010294;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 4) = 0;
  return 0xfffffffe;
}


