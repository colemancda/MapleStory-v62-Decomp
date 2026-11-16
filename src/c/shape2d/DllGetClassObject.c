/* DllGetClassObject - 0x5140106d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x106d  2  DllGetClassObject */
  piVar2 = (int *)&DAT_5140d9fc;
  iVar1 = wcscmp((wchar_t *)rclsid,u_Vector2D_5141014c);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_51410100;
  }
  else {
    iVar1 = wcscmp((wchar_t *)rclsid,u_Convex2D_51410138);
    if (iVar1 == 0) {
      piVar2 = (int *)&DAT_514100f0;
    }
    else {
      iVar1 = wcscmp((wchar_t *)rclsid,u_PolyShape2D_51410120);
      if (iVar1 == 0) {
        piVar2 = (int *)&DAT_514100e0;
      }
    }
  }
  piVar2 = FUN_51402fb6((int *)&DAT_51411560,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


