/* ptr_008888ae - 0x008888ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x008888bd) */
/* WARNING: Removing unreachable block (ram,0x008888c4) */
/* WARNING: Removing unreachable block (ram,0x008888c9) */
/* WARNING: Removing unreachable block (ram,0x008888f9) */
/* WARNING: Removing unreachable block (ram,0x00888900) */

undefined4 ptr_008888ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}


