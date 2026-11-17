/* FUN_0066e4a0 - 0x0066e4a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066e4a0(double param_1,int param_2,double param_3)

{
  float10 fVar1;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      return (float10)_DAT_008e8a80;
    }
    if (param_2 == 2) {
      return ((float10)_DAT_008e8a78 - (float10)param_3 * (float10)_DAT_008e89d0) * (float10)param_1
      ;
    }
    if (param_2 == 3) {
      fVar1 = ((float10)param_3 * (float10)_DAT_008e89d0 + (float10)_DAT_008e8a78) *
              (float10)param_1;
      if (fVar1 <= (float10)param_1) {
        fVar1 = (float10)param_1;
      }
      if (fVar1 < (float10)_DAT_008ed798) {
        return fVar1;
      }
      return (float10)_DAT_008ed798;
    }
  }
  return (float10)param_1;
}


