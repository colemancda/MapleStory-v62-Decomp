/* ptr_00437e31 - 0x00437e31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00437e31(void)

{
  undefined4 *in_EAX;
  
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = (undefined4 *)0x0;
  }
  else {
    *in_EAX = &PTR_LAB_008e84a8;
    in_EAX[1] = DAT_0097b988;
    DAT_0097b988 = in_EAX;
    in_EAX[2] = 0;
    in_EAX[3] = 0;
    in_EAX[5] = 0;
    *in_EAX = &PTR_FUN_008e872c;
  }
  DAT_00980df8 = in_EAX;
  return;
}


