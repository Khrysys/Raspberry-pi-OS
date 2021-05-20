from rq import *
import multiprocessing

class Machine:

    cellArray = []

    def __init__(self, layers):
        layerArray = []
        if layers < 1:
            raise OSError('You must specify at least two layers!') 
        else:
            for i in layers:
                layerArray.append(Layer)



    class Layer:
        def __init__(self, cells, sublayers, subcell):
            self.cells = cells
            if sublayers > 0:
                if subcell[int(len(sublayers)) - 1] < cells:
                    raise OSError('There cannot be more sublayer cells than there are total cells!')
                

        class SubLayer:
            def __init__(self, total, cells):
                self.total = total
                self.cells = cells

        class Cell:
            def __init__(self, inputs, location, function):
                self.inputs = inputs
                self.location = location
                if function == "ReLU":
                    self.function = 1
                elif function == "TANH":
                    self.function = 2
                else:
                    raise OSError('You must specify a network function!')

            def CFunc():
                if self.function = 1:
                    
                    


            class Weights:
                def __init__(self, weightArray):
                    self.weightArray = weightArray