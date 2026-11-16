/* FUN_51001277 - 0x51001277 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_51001277(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined **)(unaff_EBP + -0x14) = &DAT_51009888;
  FUN_510011e9();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      _DAT_5100988c = _DAT_5100988c + -1;
      if (_DAT_5100988c == 0) {
        _DAT_51009888 = 0;
      }
      iVar2 = -0x7fffbffd;
    }
    else {
      *puVar1 = 0;
      if (DAT_51009324 == (undefined4 *)0x0) {
        iVar2 = FUN_510016d0();
        if (-1 < iVar2) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          _DAT_5100988c = _DAT_5100988c + -1;
          if (_DAT_5100988c == 0) {
            _DAT_51009888 = 0;
          }
          iVar2 = (**(code **)**(undefined4 **)(unaff_EBP + -0x10))
                            (*(undefined4 **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0x10),
                             puVar1);
          if (iVar2 < 0) {
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))(*(int **)(unaff_EBP + -0x10));
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))(*(int **)(unaff_EBP + -0x10));
          }
          goto LAB_5100133e;
        }
      }
      else {
        iVar2 = (**(code **)*DAT_51009324)(DAT_51009324,*(undefined4 *)(unaff_EBP + 0x10),puVar1);
      }
      _DAT_5100988c = _DAT_5100988c + -1;
      if (_DAT_5100988c == 0) {
        _DAT_51009888 = 0;
      }
    }
  }
  else {
    _DAT_5100988c = _DAT_5100988c + -1;
    if (_DAT_5100988c == 0) {
      _DAT_51009888 = 0;
    }
    iVar2 = -0x7ffbfef0;
  }
LAB_5100133e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


