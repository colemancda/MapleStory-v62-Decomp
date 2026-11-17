/* FUN_005dc828 - 0x005dc828 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005dc828(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = 1;
  if (uVar1 < 0x54) {
    if (uVar1 == 0x53) {
LAB_005dc870:
      *param_2 = 4;
      return uVar2;
    }
    if (uVar1 == 0) {
      *param_2 = 0;
      return uVar2;
    }
    if (uVar1 != 0x46) {
      if (uVar1 != 0x49) {
        if (uVar1 != 0x4c) {
          return 0;
        }
LAB_005dc87b:
        *param_2 = 3;
        return uVar2;
      }
LAB_005dc886:
      *param_2 = 1;
      return uVar2;
    }
  }
  else if (uVar1 != 0x66) {
    if (uVar1 == 0x69) goto LAB_005dc886;
    if (uVar1 == 0x6c) goto LAB_005dc87b;
    if (uVar1 != 0x73) {
      return 0;
    }
    goto LAB_005dc870;
  }
  *param_2 = 2;
  return uVar2;
}


