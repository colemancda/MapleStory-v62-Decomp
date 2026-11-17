/* ptr_00434544 - 0x00434544 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00434544(void)

{
  uint in_EAX;
  int iVar1;
  uint unaff_ESI;
  
  do {
    iVar1 = *(int *)((-(uint)(in_EAX != 0) & unaff_ESI - 0x10) + 4);
    in_EAX = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    iVar1 = FUN_0042ee26();
    if (iVar1 != 0) {
      FUN_00435e0e();
    }
    unaff_ESI = in_EAX;
  } while (in_EAX != 0);
  return;
}


