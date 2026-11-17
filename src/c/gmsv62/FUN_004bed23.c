/* FUN_004bed23 - 0x004bed23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004bed23(int param_1,undefined4 param_2)

{
  int iStack_8;
  
  switch(param_2) {
  case 0x1ba620:
    if (param_1 != 0) {
      return (-(uint)(param_1 != 1) & 8) + 0x22;
    }
    iStack_8 = 0x17;
    break;
  case 0x1ba621:
    if (param_1 != 0) {
      return (-(uint)(param_1 != 1) & 8) + 0x21;
    }
    iStack_8 = 0x16;
    break;
  case 0x1ba622:
    iStack_8 = 0x18;
    break;
  case 0x1ba623:
    iStack_8 = 0x19;
    break;
  case 0x1ba624:
    if (param_1 != 0) {
      return (-(uint)(param_1 != 1) & 8) + 0x23;
    }
    iStack_8 = 0x1a;
    break;
  case 0x1ba625:
    if (param_1 != 0) {
      return (-(uint)(param_1 != 1) & 8) + 0x24;
    }
    iStack_8 = 0x1b;
    break;
  case 0x1ba626:
    if (param_1 != 0) {
      return (-(uint)(param_1 != 1) & 8) + 0x25;
    }
    iStack_8 = 0x1c;
    break;
  case 0x1ba627:
    if (param_1 == 0) {
      iStack_8 = 0x2e;
    }
    else if (param_1 == 1) {
      iStack_8 = 0x2f;
    }
    else {
      if (param_1 != 2) goto switchD_004bed3a_default;
      iStack_8 = 0x30;
    }
    break;
  default:
switchD_004bed3a_default:
    return (&DAT_00964188)[param_1];
  }
  return iStack_8;
}


