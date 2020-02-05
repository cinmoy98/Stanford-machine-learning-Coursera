function [J, grad] = linearRegCostFunction(X, y, theta, lambda)
%LINEARREGCOSTFUNCTION Compute cost and gradient for regularized linear 
%regression with multiple variables
%   [J, grad] = LINEARREGCOSTFUNCTION(X, y, theta, lambda) computes the 
%   cost of using theta as the parameter for linear regression to fit the 
%   data points in X and y. Returns the cost in J and the gradient in grad

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost and gradient of regularized linear 
%               regression for a particular choice of theta.
%
%               You should set J to the cost and grad to the gradient.
%
h=X*theta;
error=h-y;
error_sqr=error.^2;
error_sum=sum(error_sqr);
f_part=error_sum*(1/(2*m));
s_part=(lambda/(2*m))*sum(theta((2,end),1).^2);
J=f_part+s_part;

grad(1,1)=(1/m)*(error'*X(:,1));
grad(2,1)=((1/m)*(error'*X(:,2)))+((lambda/m)*theta((2,end),1));









% =========================================================================

grad = grad(:);

end
