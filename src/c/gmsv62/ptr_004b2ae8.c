/* ptr_004b2ae8 - 0x004b2ae8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004b2ae8(uint param_1)

{
  uint in_EAX;
  uint unaff_ESI;
  
  do {
    param_1 = param_1 + 1;
    in_EAX = *(int *)(in_EAX - 0xc) + 0x10U & -(uint)(*(int *)(in_EAX - 0xc) != 0);
    if (unaff_ESI <= param_1) {
      return;
    }
  } while (in_EAX != 0);
  return;
}


